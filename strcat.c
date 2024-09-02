#include <stdio.h>

char* strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) d++;
    while ((*d++ = *src++) != '\0');
    return dest;
}

int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    return 0;
}
