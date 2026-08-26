#include <stdint.h>

#include <fastntt/number_theory/gcd.h>

namespace fastntt::number_theory {
    uint32_t gcd(uint32_t a, uint32_t b) {
        // Calculated via the Euclidean Algorithm
        while (b != 0) {
            uint32_t remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
    }
}
