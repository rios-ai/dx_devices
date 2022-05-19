#include "package_name/class.h"


int main(int argc, char** argv)
{
  // Initialize the ROS Node 
  ros::init(argc, argv, "node_name");

  // Instantiate the ROS Node Handler as private nh
  ros::NodeHandle nh("~");

  //Instantiate your class here


  // Spin
  ros::spin();

  // Program succesful
  return 0;
}
