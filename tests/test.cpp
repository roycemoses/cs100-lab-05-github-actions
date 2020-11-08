#include "rectangle.hpp"
#include <stdexcept>
#include "gtest/gtest.h"

TEST(PerimeterTests, PerimeterReturnPositive)
{
    Rectangle* rect = new Rectangle(2, 2);

    EXPECT_EQ(rect->perimeter(), 8);
}