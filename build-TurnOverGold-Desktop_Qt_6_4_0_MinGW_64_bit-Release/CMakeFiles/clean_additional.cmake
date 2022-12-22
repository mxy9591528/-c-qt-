# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\TurnOverGold_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TurnOverGold_autogen.dir\\ParseCache.txt"
  "TurnOverGold_autogen"
  )
endif()
