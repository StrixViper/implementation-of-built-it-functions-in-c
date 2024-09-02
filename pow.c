#include <stdio.h>

double pow(double base, double exponent) {
    double result = 1.0;
    for (int i = 0; i < (int)exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("Power: %f\n", pow(2, 3));
    return 0;
}
