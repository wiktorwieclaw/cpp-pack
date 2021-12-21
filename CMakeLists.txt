cmake_minimum_required(VERSION 3.20)
project(cpp_pack)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/conan.cmake)

add_subdirectory(src)
add_subdirectory(test)
