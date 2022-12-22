# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\project10_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\project10_autogen.dir\\ParseCache.txt"
  "project10_autogen"
  )
endif()
