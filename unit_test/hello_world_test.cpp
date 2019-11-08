#include <gtest/gtest.h>

#include "hello_world.hpp"

TEST(HelloWorld, greeting)
{
    greeting();
    EXPECT_TRUE(true);
}
