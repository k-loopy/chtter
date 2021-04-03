#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;

  int box_1 = 0; // 변수조건

   ROS_INFO(" 20806 park sujin ");

  while (box_1 < 11)
  {
//    std::cout << " 20806 박수진 " << std::endl;
    box_1++;
  }

  return 0;
}
