#include <string.h>

extern char **environ;

char *simple_getenv(const char *name) {
    for (int i = 0; environ[i] != NULL; i++) {
        if (strncmp(name, environ[i], strlen(name)) == 0 && environ[i][strlen(name)] == '=') {
            return environ[i] + strlen(name) + 1;
        }
    }
    return NULL;
}
