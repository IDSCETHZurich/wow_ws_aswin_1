from __future__ import print_function
import qwiic_icm20948
import time
import sys


import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu

class IMUPublisher(Node):

    def __init__(self):
        super().__init__('imu_publisher')
        self.publisher_ = self.create_publisher(Imu, 'icm20948', 10)
        self.IMU = qwiic_icm20948.QwiicIcm20948()
        if self.IMU.connected == False:
            print("The Qwiic ICM20948 device isn't connected to the system. Please check your connection", \
                file=sys.stderr)
            sys.exit(1) 
        self.IMU.begin()
        self.timer_ = self.create_timer(0.03, self.publish_imu_data)

    def publish_imu_data(self):
        if self.IMU.dataReady():
            self.IMU.getAgmt()
            msg = Imu()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'imu_link' # Replace with your IMU frame ID

            # Assuming your IMU data is in the following units:
            #   - Acceleration: m/s^2
            #   - Angular velocity: rad/s
            #   - Orientation: Not provided by this sensor, set covariance to -1
            msg.linear_acceleration.x = self.IMU.axRaw * 9.81 / 16384.0 # Adjust scaling if needed
            msg.linear_acceleration.y = self.IMU.ayRaw * 9.81 / 16384.0 # Adjust scaling if needed
            msg.linear_acceleration.z = self.IMU.azRaw * 9.81 / 16384.0 # Adjust scaling if needed
            msg.linear_acceleration_covariance = [0.0] * 9 

            msg.angular_velocity.x = self.IMU.gxRaw * 0.00763 / 131.0 # Adjust scaling if needed
            msg.angular_velocity.y = self.IMU.gyRaw * 0.00763 / 131.0 # Adjust scaling if needed
            msg.angular_velocity.z = self.IMU.gzRaw * 0.00763 / 131.0 # Adjust scaling if needed
            msg.angular_velocity_covariance = [0.0] * 9

            msg.orientation_covariance = [-1.0] * 9 # Indicate orientation is not available
            
            self.publisher_.publish(msg)
        else:
            print("Waiting for data")

def main(args=None):
    rclpy.init(args=args)
    imu_publisher = IMUPublisher()
    try:
        rclpy.spin(imu_publisher)
    except (KeyboardInterrupt, SystemExit) as exErr:
        print("\nEnding Example 1")
    finally:
        imu_publisher.destroy_node()
        rclpy.shutdown()



if __name__ == '__main__':
    main()
