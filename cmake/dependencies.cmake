include(FetchContent)

FetchContent_Declare(fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG master
        )

FetchContent_MakeAvailable(fmt)


FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
        )

FetchContent_MakeAvailable(googletest)


FetchContent_Declare(gsl
        GIT_REPOSITORY https://github.com/microsoft/GSL
        GIT_TAG main
        )

FetchContent_MakeAvailable(gsl)