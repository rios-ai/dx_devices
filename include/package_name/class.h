#ifndef PACKAGE_NAME_CLASS_H
#define PACKAGE_NAME_CLASS_H

#include <ros/ros.h>

namespace package_name{

class ClassName{
public:
    ClassName(ros::NodeHandle * nh);
private:
    ros::NodeHandle* nh_;
};

}

#endif
