#include <stdio.h>

char* strcpy(char *dest, const char *src) {
    char *temp = dest;
    while ((*temp++ = *src++) != '\0');
    return dest;
}

int main() {
    char dest[20];
    const char *src = "Hello!";
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}
