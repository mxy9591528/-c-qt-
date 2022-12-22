# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\project7_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\project7_autogen.dir\\ParseCache.txt"
  "project7_autogen"
  )
endif()
