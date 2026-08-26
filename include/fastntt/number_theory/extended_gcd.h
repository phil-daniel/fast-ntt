#pragma once

#include <stdint.h>

namespace fastntt::number_theory {
    /**
     * Computes the greatest common divisor of two integers and
     * finds Bézout coefficients x and y satisfying:
     *
     *     a * x + b * y = gcd(a, b)
     *
     * @param a First integer.
     * @param b Second integer.
     * @param x Output parameter for the coefficient of a.
     * @param y Output parameter for the coefficient of b.
     * @return The greatest common divisor of a and b.
     */
    int64_t extended_gcd(int64_t a, int64_t b, int64_t& x, int64_t& y);
}
