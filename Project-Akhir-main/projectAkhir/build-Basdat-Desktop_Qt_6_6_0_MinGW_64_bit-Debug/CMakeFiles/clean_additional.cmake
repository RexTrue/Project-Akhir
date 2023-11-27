# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Basdat_autogen"
  "CMakeFiles\\Basdat_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Basdat_autogen.dir\\ParseCache.txt"
  )
endif()
