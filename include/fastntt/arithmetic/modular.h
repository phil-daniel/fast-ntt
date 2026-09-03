#pragma once

#include <cstdint>

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

    /**
     * Computes the modular multiplicative inverse of an integer.
     * Finds x such that a * x ≡ 1 % mod
     * Note: The inverse exists only when gcd(a, mod) == 1.
     *
     * @param a Integer to find the inverse of.
     * @param mod Modulus.
     * @return The modular inverse of a modulo mod.
     *
     * @throws std::invalid_argument if the modular inverse does not exist.
    */
    uint32_t inverse_mod(uint32_t a, uint32_t mod);
}
