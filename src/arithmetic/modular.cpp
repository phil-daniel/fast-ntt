#include <stdint.h>

#include <fastntt/arithmetic/modular.h>
#include <fastntt/arithmetic/power.h>

namespace fastntt {
    namespace arithmetic {
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
    }
}
