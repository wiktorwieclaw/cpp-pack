#include <fmt/format.h>
#include <iostream>

#include "hello/hello.hpp"

void run() {
    fmt::print("Enter your name:\n");

    std::string name;
    std::cin >> name;

    fmt::print(hello::make_greeting(name));
}