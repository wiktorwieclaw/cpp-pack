# cpp-pack
C++ project template.

## Dependencies
* [CMake](https://cmake.org/)
* [Conan](https://conan.io/)
  
## Optional dependencies
* [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html)
* [ClangTidy](https://clang.llvm.org/extra/clang-tidy/)

## Structure
```
.
├── cmake
│   └── conan.cmake
├── src
│   ├── CMakeLists.txt
│   └── main.cpp
├── test
│   ├── CMakeLists.txt
│   └── test.cpp
├── .clang-format
├── .clang-tidy
├── .gitignore
├── CMakeLists.txt
├── conanfile.txt
├── LICENSE
└── README.md
```

## Build
```bash
mkdir build
cd build
conan install ..
cmake ..
cmake --build .
```
