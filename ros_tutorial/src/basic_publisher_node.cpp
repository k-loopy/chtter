#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
  int count;

  std::cout <<

  while(ros::ok())
  {
    std::string massage;

    std::cin >> massage;

    std_msgs::String msg;

    msg.data = my_name + " = " + chat_message

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
