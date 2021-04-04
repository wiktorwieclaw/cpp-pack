add_executable(integration.test
        integration.test.cpp
        )

target_link_libraries(integration.test
        gtest_main
        ${PROJECT_NAME}_lib
        )