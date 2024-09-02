#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void simple_abort() {
    kill(getpid(), SIGABRT);
    // SIGABRT is normally meant to terminate the process,
    // but just in case, exit the program explicitly.
    exit(1);
}
