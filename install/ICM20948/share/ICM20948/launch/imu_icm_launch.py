import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([
        Node(
            package='ICM20948',
            executable='ICM_raw_data',
            name='imu_publisher',
            output='screen',
            parameters=[],
        ),
    ])