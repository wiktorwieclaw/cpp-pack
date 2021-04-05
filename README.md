# cpp-pack
C++ project structure template.

## Features
* Includes useful libraries out of the box:
  * [googletest](https://github.com/google/googletest) for testing 
  * [fmt](https://github.com/fmtlib/fmt) for string formatting
  * [gsl](https://github.com/microsoft/GSL) contains useful utilities such as ```gsl::span```
* Ease of managing dependencies using CMake's ```FetchContent``` module.
* Code formatting using [clang-format](https://clang.llvm.org/docs/ClangFormat.html).
* Static code analysis using [clang-tidy](https://clang.llvm.org/extra/clang-tidy/).

## Structure
```
.
├── cmake
│   └── dependencies.cmake
├── docs
│   └── doc.md
├── lib
│   ├── hello
│   │   ├── include/hello
│   │   │   └── hello.hpp
│   │   ├── CMakeLists.txt
│   │   ├── hello.cpp
│   │   └── hello.test.cpp     
│   └── CMakeLists.txt
├── src
│   ├── CMakeLists.txt
│   ├── main.cpp
│   ├── run.cpp
│   └── run.hpp
├── test
│   ├── CMakeLists.txt
│   └── integration.test.cpp
├── .clang-format
├── .clang-tidy
└── CMakeLists.txt
```

## Notes
* Don't forget to change the name of your project in `/CMakeLists.txt`.
* `/lib/` is not meant for external libraries but for parts of your code that could be considered as a separate package.
  For external libraries I'd suggest using fetch in `/cmake/dependency.cmake`.
* Put your library headers in `/include/libname/` directory.
  This ensures that the library name needs to be specified as a path in the include directive `#include "libname/lib.h"`.
  This is important when your library has many header files.
* Write unit tests inside your library directory.
* Feel free to fork and modify this repository to your liking.
