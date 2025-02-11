"""Launch analyzer loader with parameters from yaml."""

import launch
import launch_ros.actions

analyzer_params_filepath = "/home/pi/wow_ws/install/diagnostic_aggregator/share/diagnostic_aggregator/example_analyzers.yaml"


def generate_launch_description():
    aggregator = launch_ros.actions.Node(
        package='diagnostic_aggregator',
        executable='aggregator_node',
        output='screen',
        parameters=[analyzer_params_filepath])
    diag_publisher = launch_ros.actions.Node(
        package='diagnostic_aggregator',
        executable='example_pub.py')
    return launch.LaunchDescription([
        aggregator,
        diag_publisher,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=aggregator,
                on_exit=[launch.actions.EmitEvent(
                    event=launch.events.Shutdown())],
            )),
    ])
