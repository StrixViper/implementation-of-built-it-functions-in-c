#include <stdio.h>
#include <math.h>

double sqrt(double x) {
    double result = x;
    double diff;
    do {
        double prev = result;
        result = (result + x / result) / 2.0;
        diff = prev - result;
    } while (diff > 1e-7 || diff < -1e-7);
    return result;
}

int main() {
    printf("Square root: %f\n", sqrt(16));
    return 0;
}
