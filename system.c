#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int simple_system(const char *command) {
    if (command == NULL) {
        return 1;
    }

    pid_t pid = fork();
    if (pid == 0) {
        execl("/bin/sh", "sh", "-c", command, (char *)NULL);
        exit(127);  // If execl fails
    } else if (pid < 0) {
        return -1;  // Fork failed
    } else {
        int status;
        waitpid(pid, &status, 0);
        return status;
    }
}
