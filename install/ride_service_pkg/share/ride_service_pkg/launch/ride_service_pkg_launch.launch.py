import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import ThisLaunchFileDir
from launch_ros.actions import Node
from launch_ros.actions import PushRosNamespace
import yaml

def generate_launch_description():
    service_package = 'ride_service_pkg'
    service_server_node_name = 'ride_request_server'
    service_client_node_name = 'ride_request_client'
    ld = LaunchDescription()

    service_server = Node(
        package=service_package,
        executable=service_server_node_name,
        name=service_server_node_name,
        output='screen'
    )
    service_client = Node(
        package=service_package,
        executable=service_client_node_name,
        name=service_client_node_name,
        output='screen'
    )
    ld.add_action(service_server)
    ld.add_action(service_client)

    return ld