import rclpy
from rclpy.node import Node
from request_ride.srv import UserInput
from request_ride.msg import GPSLocation
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor

class RideRequestServer(Node):
    def __init__(self):
        super().__init__('ride_request_server')
        self.publisher_ = self.create_publisher(GPSLocation, 'location_topic', 10)
        self.srv = self.create_service(UserInput, 'user_input', self.handle_user_input)

    def handle_user_input(self, request, response):
        self.get_logger().info('Incoming request')
        response.name = request.name
        response.pickup = request.pickup
        response.dropoff = request.dropoff
        self.get_logger().info('Sending response')
        self.publish_location()
        response.success = True

        location = GPSLocation()
        location.pickup = request.pickup
        location.dropoff = request.dropoff
        self.publisher_.publish(location)
        self.get_logger().info('Initiating route for pickup at: ' + location.pickup)

def main(args=None):
    rclpy.init(args=args)
    ride_request_server = RideRequestServer()
    executor = MultiThreadedExecutor(num_threads=4)
    rclpy.spin(ride_request_server, executor=executor)
    ride_request_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
