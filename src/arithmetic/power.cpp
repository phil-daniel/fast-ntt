#include <cstdint>

#include <fastntt/arithmetic/power.h>

namespace fastntt::arithmetic {
    uint32_t pow(uint32_t base, uint32_t exponent) {
        uint32_t result = 1;
        for (uint32_t i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}
