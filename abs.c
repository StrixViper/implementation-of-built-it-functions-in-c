#include <stdio.h>

int abs(int n) {
    return n < 0 ? -n : n;
}

int main() {
    int num = -42;
    printf("Absolute value: %d\n", abs(num));
    return 0;
}
