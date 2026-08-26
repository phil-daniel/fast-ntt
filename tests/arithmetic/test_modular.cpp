#include <gtest/gtest.h>

#include <fastntt/arithmetic/modular.h>

TEST(Modular, AddMod) {
    EXPECT_EQ(fastntt::arithmetic::add_mod(5, 3, 7), 1);
    EXPECT_EQ(fastntt::arithmetic::add_mod(10, 10, 7), 6);
}

TEST(Modular, SubMod) {
    EXPECT_EQ(fastntt::arithmetic::sub_mod(5, 3, 7), 2);
    EXPECT_EQ(fastntt::arithmetic::sub_mod(3, 5, 7), 5);
    EXPECT_EQ(fastntt::arithmetic::sub_mod(0, 5, 7), 2);
}

TEST(Modular, MulMod) {
    EXPECT_EQ(fastntt::arithmetic::mul_mod(5, 3, 7), 1);
    EXPECT_EQ(fastntt::arithmetic::mul_mod(10, 10, 7), 2);
    EXPECT_EQ(fastntt::arithmetic::mul_mod(0, 123, 7), 0);
}

TEST(Modular, PowMod) {
    EXPECT_EQ(fastntt::arithmetic::pow_mod(2, 10, 7), 2);
    EXPECT_EQ(fastntt::arithmetic::pow_mod(3, 5, 17), 5);
    EXPECT_EQ(fastntt::arithmetic::pow_mod(5, 0, 7), 1);
}
