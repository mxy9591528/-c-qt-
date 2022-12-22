# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\project15_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\project15_autogen.dir\\ParseCache.txt"
  "project15_autogen"
  )
endif()
