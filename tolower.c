#include <stdio.h>

int tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    char ch = 'G';
    printf("Lowercase: %c\n", tolower(ch));
    return 0;
}
