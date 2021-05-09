set(LIB_NAME hello)

add_library(${LIB_NAME}
        hello.cpp
        )

target_include_directories(${LIB_NAME} PUBLIC include)

target_link_libraries(${LIB_NAME}
        PRIVATE CONAN_PKG::fmt
        )

add_executable(${LIB_NAME}.test
        hello.test.cpp
        )

target_link_libraries(${LIB_NAME}.test
        ${LIB_NAME}
        CONAN_PKG::gtest
        )