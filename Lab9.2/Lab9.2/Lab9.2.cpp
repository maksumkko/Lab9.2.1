#include <iostream>
#include "math_macros.h"
#include "input_output.h"

int main() {
    double x, y, z, w;

    getInput(x, y, z);

#if defined(USE_MAX)
    if (z > 1 && z < 3) {
        w = MAX(ABS(x) + ABS(y) + ABS(z), POW(x, 3));
    }
#elif defined(USE_MIN)
    if (z > 3) {
        w = MIN(2 * x + y, POW(2 * y - z, 2));
    }
#else
    // Check conditions for both cases without defining macros
    if (z > 1 && z < 3) {
        w = MAX(ABS(x) + ABS(y) + ABS(z), POW(x, 3));
    }
    else if (z > 3) {
        w = MIN(2 * x + y, POW(2 * y - z, 2));
    }
    else {
        std::cerr << "Invalid range for z. No calculation performed." << std::endl;
        return 1;
    }
#endif

    displayResult(w);

    return 0;
}