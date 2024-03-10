from request_ride.srv import UserInput
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import String
from request_ride.msg import UserInput

class RideRequestClient(Node):

    def __init__(self):
        super().__init__('ride_request_client')
        self.client = self.create_client(UserInput, 'ride_request')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.response = UserInput.Response()
        self.req = UserInput.Request()

    def send_request(self, name, pickup, dropoff):
        req = UserInput.Request()
        req.name = name
        req.pickup = pickup
        req.dropoff = dropoff
        future = self.client.call_async(req)
        future.add_done_callback(self.callback)

    def callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info(f"Response: Success")
                self.get_logger().info(f"Name: {response.name}, Pickup: {response.pickup}, Dropoff: {response.dropoff}")
                if response.message:  # If there's an additional message
                    self.get_logger().info(f"Message: {response.message}")
        else:
            self.get_logger().info("Operation failed.")
        except Exception as e:
            self.get_logger().info(f"Service call failed: {e}")

def main(args=None):
    rclpy.init(args=args)

    name = input("Enter your name: ")
    pickup = input("Enter your pickup location: ")
    dropoff = input("Enter your dropoff location: ")

    ride_request_client = RideRequestClient()
    ride_request_client.send_request(name, pickup, dropoff)

    rclpy.spin(ride_request_client)

    ride_request_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
