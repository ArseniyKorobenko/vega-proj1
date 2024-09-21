#include <gtest/gtest.h>

#include "my_add.hpp"

TEST(Add, Simple)
{
    EXPECT_EQ(my_add(2, 2), 4);
    EXPECT_EQ(my_add(123, 456), 579);
    EXPECT_EQ(my_add(-3, 3), 0);
    EXPECT_EQ(my_add(-8, -9), -17);
}
