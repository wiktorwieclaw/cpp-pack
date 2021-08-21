add_executable(test test.cpp)

target_link_libraries(test
    CONAN_PKG::catch2
    )
