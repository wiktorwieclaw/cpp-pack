find_package(Doxygen)

if (DOXYGEN_FOUND)
    find_package(Doxygen REQUIRED)

    set(DOXYGEN_RECURSIVE Yes)
    set(DOXYGEN_EXTRACT_ALL Yes)
    set(DOXYGEN_HIDE_SCOPE_NAMES YES)
    set(DOXYGEN_FILE_PATTERNS *.hpp *.h)
    set(DOXYGEN_EXCLUDE_SYMBOLS detail)

    doxygen_add_docs(docs
            ${CMAKE_SOURCE_DIR}/src
            ${CMAKE_SOURCE_DIR}/lib
    )
endif ()