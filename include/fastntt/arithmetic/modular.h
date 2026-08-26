#pragma once

#include <stdint.h>

namespace fastntt::arithmetic {
    /**
     * Adds two integers modulo a given modulus.
     *
     * @param a First integer.
     * @param b Second integer.
     * @param mod Modulus.
     * @return (a + b) mod mod.
     */
    uint32_t add_mod(uint32_t a, uint32_t b, uint32_t mod);

    /**
     * Subtracts two integers modulo a given modulus.
     *
     * @param a First integer.
     * @param b Second integer.
     * @param mod Modulus.
     * @return (a - b) mod mod.
     */
    uint32_t sub_mod(uint32_t a, uint32_t b, uint32_t mod);

    /**
     * Multiplies two integers modulo a given modulus.
     *
     * @param a First integer.
     * @param b Second integer.
     * @param mod Modulus.
     * @return (a * b) mod mod.
     */
    uint32_t mul_mod(uint32_t a, uint32_t b, uint32_t mod);

    /**
     * Raises an integer to a power modulo a given modulus.
     *
     * @param a Base.
     * @param exponent Exponent.
     * @param mod Modulus.
     * @return (a^exponent) mod mod.
     */
    uint32_t pow_mod(uint32_t a, uint32_t exponent, uint32_t mod);

    // TODO: inverse mod
}
