#include <gtest/gtest.h>

#include <fastntt/number_theory/extended_gcd.h>

TEST(ExtendedGCD, Basic) {
    int64_t x;
    int64_t y;

    int64_t result = fastntt::number_theory::extended_gcd(30, 12, x, y);

    EXPECT_EQ(result, 6);
    EXPECT_EQ(30 * x + 12 * y, result);
}

TEST(ExtendedGCD, Coprime) {
    int64_t x;
    int64_t y;

    int64_t result = fastntt::number_theory::extended_gcd(3, 7, x, y);

    EXPECT_EQ(result, 1);
    EXPECT_EQ(3 * x + 7 * y, result);
}

TEST(ExtendedGCD, ReversedArguments) {
    int64_t x;
    int64_t y;

    int64_t result = fastntt::number_theory::extended_gcd(12, 30, x, y);

    EXPECT_EQ(result, 6);
    EXPECT_EQ(12 * x + 30 * y, result);
}

TEST(ExtendedGCD, EqualValues) {
    int64_t x;
    int64_t y;

    int64_t result = fastntt::number_theory::extended_gcd(10, 10, x, y);

    EXPECT_EQ(result, 10);
    EXPECT_EQ(10 * x + 10 * y, result);
}

TEST(ExtendedGCD, Zero) {
    int64_t x;
    int64_t y;

    int64_t result = fastntt::number_theory::extended_gcd(10, 0, x, y);

    EXPECT_EQ(result, 10);
    EXPECT_EQ(10 * x + 0 * y, result);
}