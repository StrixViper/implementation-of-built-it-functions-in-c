#include <stdio.h>

int atoi(const char *str) {
    int result = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        }
        str++;
    }
    return result;
}

int main() {
    const char *str = "12345";
    printf("Integer: %d\n", atoi(str));
    return 0;
}
