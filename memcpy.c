#include <stdio.h>
#include <string.h>

void* memcpy(void *dest, const void *src, size_t n) {
    char *d = dest;
    const char *s = src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

int main() {
    char src[10] = "abcdef";
    char dest[10];
    memcpy(dest, src, 6);
    printf("Copied memory: %s\n", dest);
    return 0;
}
