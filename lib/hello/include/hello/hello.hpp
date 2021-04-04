#ifndef CPP_PACK_HELLO_HPP
#define CPP_PACK_HELLO_HPP

#include <string_view>

namespace hello {

auto make_greeting(std::string_view name) -> std::string;

}

#endif  // CPP_PACK_HELLO_HPP
