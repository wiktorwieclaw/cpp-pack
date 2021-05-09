add_executable(integration.test
        integration.test.cpp
        )

target_link_libraries(integration.test
        CONAN_PKG::gtest
        ${PROJECT_NAME}_lib
        )