cmake_minimum_required(VERSION 3.0.2)
project(package_name)

# Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED roscpp)

# ################################################################################
# Declare ROS dynamic reconfigure parameters ##
# ################################################################################

# To declare and build dynamic reconfigure parameters within this package, follow
# these steps: * In the file package.xml: * add a build_depend and a exec_depend
# tag for "dynamic_reconfigure" * In this file (CMakeLists.txt): * add
# "dynamic_reconfigure" to find_package(catkin REQUIRED COMPONENTS ...) *
# uncomment the "generate_dynamic_reconfigure_options" section below and list
# every .cfg file to be processed

# Generate dynamic reconfigure parameters in the 'cfg' folder
# generate_dynamic_reconfigure_options( cfg/DynReconf1.cfg cfg/DynReconf2.cfg )

# ################################################################################
# catkin specific configuration ##
# ################################################################################
# The catkin_package macro generates cmake config files for your package Declare
# things to be passed to dependent projects INCLUDE_DIRS: uncomment this if your
# package contains header files LIBRARIES: libraries you create in this project
# that dependent projects also need CATKIN_DEPENDS: catkin_packages dependent
# projects also need DEPENDS: system dependencies of this project that dependent
# projects also need
catkin_package(
  # INCLUDE_DIRS include
  # LIBRARIES package_name
  CATKIN_DEPENDS roscpp
  # DEPENDS system_lib
)

# ################################################################################
# Build ##
# ################################################################################

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node src/name_node.cpp src/class.cpp)

# Add cmake target dependencies of the executable same as for the library above
add_dependencies(
  ${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

# Specify libraries to link a library or executable target against
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES})

# ################################################################################
# Install ##
# ################################################################################

# all install targets should use catkin DESTINATION variables See
# http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

# Mark executables for installation See http://docs.ros.org/melodic/api/catkin/htm
# l/howto/format1/building_executables.html
install(TARGETS ${PROJECT_NAME}_node
        RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

# Mark libraries for installation See http://docs.ros.org/melodic/api/catkin/html/
# howto/format1/building_libraries.html install(TARGETS ${PROJECT_NAME} ARCHIVE
# DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION} LIBRARY DESTINATION
# ${CATKIN_PACKAGE_LIB_DESTINATION} RUNTIME DESTINATION
# ${CATKIN_GLOBAL_BIN_DESTINATION} )

# Mark cpp header files for installation
install(
  DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING
  PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)

# Mark other files for installation (e.g. launch and bag files, etc.)
install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

# ################################################################################
# Testing ##
# ################################################################################

# Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_roscpp_package_template.cpp)
# if(TARGET ${PROJECT_NAME}-test) target_link_libraries(${PROJECT_NAME}-test
# ${PROJECT_NAME}) endif()

# Add folders to be run by python nosetests catkin_add_nosetests(test)
