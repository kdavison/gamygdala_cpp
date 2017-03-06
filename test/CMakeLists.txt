cmake_minimum_required (VERSION 3.2)

include_directories(${CMAKE_SOURCE_DIR}/artifact/include)
link_directories(${CMAKE_SOURCE_DIR}/artifact/lib)

set(SOURCE
  ${SOURCE}
  
)

add_executable(gamygdala_test ${SOURCE});
