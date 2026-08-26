#include <gtest/gtest.h>

#include <fastntt/arithmetic/power.h>

TEST(Power, Basic) {
    EXPECT_EQ(fastntt::arithmetic::pow(2, 10), 1024);
    EXPECT_EQ(fastntt::arithmetic::pow(3, 5), 243);
}

TEST(Power, ZeroExponent) {
    EXPECT_EQ(fastntt::arithmetic::pow(123, 0), 1);
}

TEST(Power, ZeroBase) {
    EXPECT_EQ(fastntt::arithmetic::pow(0, 5), 0);
}
