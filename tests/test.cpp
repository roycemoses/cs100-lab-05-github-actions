#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
#include <stdexcept>


TEST(ConstructorTests, DefaultConstructor)
{
    Rectangle rect;
    EXPECT_EQ(rect.area(), 0);
    EXPECT_EQ(rect.perimeter(), 0);
}