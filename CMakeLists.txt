cmake_minimum_required (VERSION 3.2)
project(gamygdala_cpp)
set(GAMYGDALA_VERSION_MAJOR "0")
set(GAMYGDALA_VERSION_MINOR "0")
set(GAMYGDALA_VERSION_PATCH "0")
set(GAMYGDALA_VERION "${GAMYGDALA_VERSION_MAJOR}.${GAMYGDALA_VERSION_MINOR}.${GAMYGDALA_VERSION_PATCH}")

set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/artifact)
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/artifact)

option(GAMYGDALA_TEST "build tests" ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/external)
add_subdirectory(${CMAKE_SOURCE_DIR}/source)

if(GAMYGDALA_TEST)
add_subdirectory(${CMAKE_SOURCE_DIR}/test)
endif()
