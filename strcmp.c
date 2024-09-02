#include <stdio.h>

int strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
    return 0;
}
