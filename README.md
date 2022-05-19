# <package_name>
http://github.com/rios-ai/<package_name>

## Maintainers:
- maintainer (maintainer@rios.ai)
- maintainer (maintainer@rios.ai)


<Brief high level description >

## Changes to make ##
1. Replace all instances of `package_name` with your package_name
2. Replace all instances of `PACKAGE_NAME` in include with your CAP package_name
3. In package.xml
   1. Enter yourself as author
   2. Enter yourself as maintainer 1
   3. Assign a maintainer 2
   4. Add additional dependencies as needed
4. Rename class.h to your first class
5. Rename class.src to your first class
6. Rename name_node.cpp to your node name
7. Update CMakeLists.txt based off or 3.4, 5 and 6
8. Write your code
9. Update README
   1.  Maintainers
   2.  High level description
   3.  Node, subscriptions, publishers and params
   4.  Requirements
   5.  Build Instructions
10. Delete this part from README

Note you can create copies of class.cpp/h and name_node.cpp to support multiple classes and nodes


## Requirements ##
 - 

##  Build Instructions ##
```bash
<if more complicated than a catkin build   put directions here>
```

## Node Name 1 ##
 description
 
### Publishers ###
 - `topic_name` [msg_type] description
 - 
### Subscribers ###
- `topic_name` [msg_type] description
### Parameters
- `param_name` [type (i.e. double, string)] description
