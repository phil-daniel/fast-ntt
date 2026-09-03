#include <cstdint>

#include <fastntt/number_theory/extended_gcd.h>

namespace fastntt::number_theory {
    int64_t extended_gcd(int64_t a, int64_t b, int64_t &x, int64_t &y) {
        // Calculated via the Extended Euclidean Algorithm
        int64_t curr_r = b, old_r = a;
        int64_t curr_x = 0, old_x = 1;
        int64_t curr_y = 1, old_y = 0;

        while (curr_r != 0) {
            int64_t quotient = old_r / curr_r;
            int64_t temp = old_r - quotient * curr_r;
            old_r = curr_r;
            curr_r = temp;

            temp = old_x - quotient * curr_x;
            old_x = curr_x;
            curr_x = temp;

            temp = old_y - quotient * curr_y;
            old_y = curr_y;
            curr_y = temp;
        }

        x = old_x;
        y = old_y;
        return old_r;
    }
}
