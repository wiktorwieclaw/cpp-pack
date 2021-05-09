cmake_minimum_required(VERSION 3.1)
project(cpp_pack)

set(CMAKE_CXX_STANDARD 20)

include(cmake/conan.cmake)

add_subdirectory(doc)
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
