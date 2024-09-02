#include <stdio.h>

int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
    printf("Factorial: %d\n", factorial(5));
    return 0;
}
