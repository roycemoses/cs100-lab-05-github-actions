#include "rectangle.hpp"
#include <stdexcept>
#include "gtest/gtest.h"

TEST(PerimeterTests, PerimeterReturnPositive)
{
    Rectangle* rect = new Rectangle(2, 2);

    EXPECT_EQ(rect->perimeter(), 8);
}

TEST(PerimeterTests, PerimeterNegative)
{
    EXPECT_THROW({
        try {
            Rectangle rect(-2, -2);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_EQ("-2", ia.what());
            throw;
        }
    }, std::invalid_argument);
}

TEST(PerimeterTests, PerimeterZeroByZero)
{
    Rectangle* rect = new Rectangle(0, 0);

    EXPECT_EQ(rect->perimeter(), 0);
}