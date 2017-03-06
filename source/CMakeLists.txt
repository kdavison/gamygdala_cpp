cmake_minimum_required (VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCE
  ${SOURCE}
  agent.cc
#  emotion.cc
#  goal.cc
  gamygdala.cc  
)


add_library(gamygdala ${SOURCE})
target_include_directories(gamygdala PUBLIC ${CMAKE_SOURCE_DIR}/include)
