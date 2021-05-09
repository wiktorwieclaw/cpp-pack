# cpp-pack
C++ project template.

## Dependencies
* [CMake](https://cmake.org/)
* [Conan](https://conan.io/)
  
## Optional dependencies
* [Doxygen](https://www.doxygen.nl/index.html)
* [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html)
* [ClangTidy](https://clang.llvm.org/extra/clang-tidy/)

## Structure
```
.
├── cmake
│   └── conan.cmake
├── doc
│   └── CMakeLists.txt
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
├── CMakeLists.txt
└── conanfile.txt 
```

## Build
```bash
mkdir build
cd build
conan install ..
cmake ..
```

## Notes
* Change the name of your project in `/CMakeLists.txt`.
* Feel free to modify this repository to your liking.
