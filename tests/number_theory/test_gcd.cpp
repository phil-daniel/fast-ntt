#include <gtest/gtest.h>

#include <fastntt/number_theory/gcd.h>

TEST(GCD, Basic) {
    EXPECT_EQ(fastntt::number_theory::gcd(12, 8), 4);
    EXPECT_EQ(fastntt::number_theory::gcd(15, 10), 5);
    EXPECT_EQ(fastntt::number_theory::gcd(17, 5), 1);
}

TEST(GCD, ReversedArguments) {
    EXPECT_EQ(fastntt::number_theory::gcd(8, 12), 4);
    EXPECT_EQ(fastntt::number_theory::gcd(10, 15), 5);
}

TEST(GCD, EqualValues) {
    EXPECT_EQ(fastntt::number_theory::gcd(7, 7), 7);
    EXPECT_EQ(fastntt::number_theory::gcd(100, 100), 100);
}

TEST(GCD, Zero) {
    EXPECT_EQ(fastntt::number_theory::gcd(0, 5), 5);
    EXPECT_EQ(fastntt::number_theory::gcd(5, 0), 5);
    EXPECT_EQ(fastntt::number_theory::gcd(0, 0), 0);
}