#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
#include <stdexcept>


TEST(ConstructorTests, DefaultConstructor)
{
    Rectangle rect;
    EXPECT_EQ(rect.area(), 0);
    EXPECT_EQ(rect.perimeter(), 0);
}

TEST(ConstructorTests, ConstructorPositiveWidthAndHeight)
{
    Rectangle rect(2, 2);
    EXPECT_EQ(rect.area(), 4);
    EXPECT_EQ(rect.perimeter(), 4);
}