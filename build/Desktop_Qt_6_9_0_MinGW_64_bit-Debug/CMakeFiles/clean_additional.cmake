# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PrisonManagementSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PrisonManagementSystem_autogen.dir\\ParseCache.txt"
  "PrisonManagementSystem_autogen"
  )
endif()
