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

TEST(InverseMod, Basic) {
    EXPECT_EQ(fastntt::arithmetic::inverse_mod(3, 7), 5);
    EXPECT_EQ(fastntt::arithmetic::inverse_mod(2, 5), 3);
    EXPECT_EQ(fastntt::arithmetic::inverse_mod(4, 7), 2);
}

TEST(InverseMod, One) {
    EXPECT_EQ(fastntt::arithmetic::inverse_mod(1, 7), 1);
    EXPECT_EQ(fastntt::arithmetic::inverse_mod(1, 100), 1);
}

TEST(InverseMod, LargeValues) {
    EXPECT_EQ(
        fastntt::arithmetic::inverse_mod(3, 998244353),
        332748118
    );
}

TEST(InverseMod, NoInverse) {
    EXPECT_THROW(
        fastntt::arithmetic::inverse_mod(2, 4),
        std::invalid_argument
    );

    EXPECT_THROW(
        fastntt::arithmetic::inverse_mod(6, 9),
        std::invalid_argument
    );
}