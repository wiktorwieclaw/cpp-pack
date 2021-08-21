add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    CONAN_PKG::fmt
    CONAN_PKG::range-v3
    )
