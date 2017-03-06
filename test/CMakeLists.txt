cmake_minimum_required (VERSION 3.2)

include_directories(${CMAKE_SOURCE_DIR}/artifact/include)
link_directories(${CMAKE_SOURCE_DIR}/artifact/lib)

set(SOURCE
  ${SOURCE}
  main.cc
)

add_executable(gamygdala_test ${SOURCE})
target_link_libraries(
  gamygdala_test #target
  pthread
  gtest  
  gmock
  yaml-cpp
)


