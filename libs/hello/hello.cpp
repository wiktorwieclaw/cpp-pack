#include "hello/hello.hpp"

#include <fmt/format.h>

namespace hello {

auto make_greeting(std::string_view name) -> std::string {
    return fmt::format("Hello {}!", name);
}

}  // namespace hello
