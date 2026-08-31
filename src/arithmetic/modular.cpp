#include <stdexcept>
#include <stdint.h>

#include <fastntt/arithmetic/modular.h>
#include <fastntt/arithmetic/power.h>
#include <fastntt/number_theory/extended_gcd.h>

namespace fastntt::arithmetic {
    uint32_t add_mod(uint32_t a, uint32_t b, uint32_t mod) {
        return (a + b) % mod;
    }

    uint32_t sub_mod(uint32_t a, uint32_t b, uint32_t mod) {
        uint32_t sub_result;
        if (a >= b) {
            sub_result = a - b;
        } else {
            sub_result = mod - (b - a);
        }
        return sub_result % mod;
    }

    uint32_t mul_mod(uint32_t a, uint32_t b, uint32_t mod) {
        return (a * b) % mod;
    }

    uint32_t pow_mod(uint32_t a, uint32_t exponent, uint32_t mod) {
        return pow(a, exponent) % mod;
    }

    uint32_t inverse_mod(uint32_t a, uint32_t mod) {
        int64_t x, y;
        int64_t mod_result = number_theory::extended_gcd(a, mod, x, y);
        if (mod_result != 1) {
            throw std::invalid_argument("Modular inverse doesn't exist");
        }
        // Normalising to x in [0, mod)
        x %= mod;
        if (x < 0) x += mod;
        return static_cast<uint32_t>(x);
    }
}
