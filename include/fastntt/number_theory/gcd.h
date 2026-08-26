#pragma once

#include <stdint.h>

namespace fastntt::number_theory {
    /**
     * Computes the greatest common divisor of two integers.
     *
     * @param a First integer.
     * @param b Second integer.
     * @return The greatest common divisor of a and b.
     */
    uint32_t gcd(uint32_t a, uint32_t b);
}
