#include <stdio.h>

int toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    char ch = 'g';
    printf("Uppercase: %c\n", toupper(ch));
    return 0;
}
