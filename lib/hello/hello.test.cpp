#include <gtest/gtest.h>

#include "hello/hello.hpp"

TEST(HelloSuite, MakeGreeting) {
    EXPECT_EQ(hello::make_greeting("John"), "Hello John!");
}