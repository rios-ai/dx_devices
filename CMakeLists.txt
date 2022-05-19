project(dx_devices)

cmake_minimum_required(VERSION 3.0.2)
add_compile_options(-std=c++17)

find_package(catkin REQUIRED dx_rios_utils)

catkin_package(INCLUDE_DIRS include)

include_directories(include ${catkin_INCLUDE_DIRS})

install(
  DIRECTORY include/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING
  PATTERN "*.h"
)

