add_library(${PROJECT_NAME}_lib
        run.cpp
        run.hpp
        )

target_link_libraries(${PROJECT_NAME}_lib
        ${CONAN_LIBS}
        hello
        )

add_executable(${PROJECT_NAME}
        main.cpp
        )

target_link_libraries(${PROJECT_NAME}
        ${PROJECT_NAME}_lib
        )
