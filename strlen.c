#include <stdio.h>

size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *text = "Hello, World!";
    printf("Length: %zu\n", strlen(text));
    return 0;
}
