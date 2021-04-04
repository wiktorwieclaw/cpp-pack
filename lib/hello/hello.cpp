#include "hello/hello.hpp"

#include <fmt/format.h>

using namespace hello;

auto hello::make_greeting(std::string_view name) -> std::string {
    return fmt::format("Hello {}!", name);
}
