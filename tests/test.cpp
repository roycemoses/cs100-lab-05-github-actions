#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
#include <stdexcept>


TEST(ConstructorTests, DefaultConstructor)
{
    Rectangle* rect = new Rectangle();
    EXPECT_EQ(rect->area(), 0);
    EXPECT_EQ(rect->perimeter(), 0);
}

TEST(ConstructorTests, ConstructorPositiveWidthAndHeight)
{
    Rectangle* rect = new Rectangle(2, 2);
    EXPECT_EQ(rect->area(), 4);
    EXPECT_EQ(rect->perimeter(), 8);
}

TEST(ConstructorTests, ConstructorNegativeWidthAndHeight)
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

TEST(ConstructorTests, ConstructorZeroWidthAndHeight)
{
    Rectangle* rect = new Rectangle(0, 0);
    EXPECT_EQ(rect->area(), 0);
    EXPECT_EQ(rect->perimeter(), 0);
}

TEST(ConstructorTests, ConstructorRationalWidthAndHeight)
{
    Rectangle* rect = new Rectangle(2.25, 2.25);
    EXPECT_EQ(rect->area(), 4);
    EXPECT_EQ(rect->perimeter(), 8);
}