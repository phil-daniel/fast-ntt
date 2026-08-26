#pragma once

#include <stdint.h>

namespace fastntt::arithmetic {
    /**
     * Raises an integer to a non-negative integer power.
     *
     * @param base Base value.
     * @param exponent Non-negative exponent.
     * @return base raised to the given exponent.
     */
    uint32_t pow(uint32_t base, uint32_t exponent);
}
