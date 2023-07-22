#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t parent_pid = getppid();
    printf("Parent PID: %d\n", parent_pid);
    printf("Current Shell PID: %d\n", getpid());
    return 0;
}

