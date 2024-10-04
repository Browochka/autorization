# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\firstprojec_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\firstprojec_autogen.dir\\ParseCache.txt"
  "firstprojec_autogen"
  )
endif()
