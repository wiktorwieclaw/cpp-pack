cmake_minimum_required(VERSION 3.1)
project(cpp_pack)

set(CMAKE_CXX_STANDARD 20)

include(cmake/conan.cmake)

add_subdirectory(docs)
add_subdirectory(libs)
add_subdirectory(src)
add_subdirectory(tests)
