cmake_minimum_required(VERSION 3.17)
project(cpp_pack)

set(CMAKE_CXX_STANDARD 20)

include(cmake/dependencies.cmake)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)