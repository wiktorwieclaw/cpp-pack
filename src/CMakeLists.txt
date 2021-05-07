set(SOURCES
        main.cpp
        run.cpp
        run.hpp
        )

set(LIBS
        fmt::fmt
        GSL
        hello
        fmt::fmt
        )

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${LIBS})

add_library(${PROJECT_NAME}_lib ${SOURCES})
target_include_directories(${PROJECT_NAME}_lib PUBLIC .)
target_link_libraries(${PROJECT_NAME}_lib ${LIBS})