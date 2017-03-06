cmake_minimum_required (VERSION 3.2)

#build google test
add_subdirectory(googletest)

#build yaml-cpp
set(YAML_CPP_BUILD_TOOLS OFF CACHE BOOL "diable yaml-cpp tests")
add_subdirectory(yaml-cpp)
