#include <stdio.h>

int main(int argc, char **argv) {
    // Start from index 1 to skip the program name (argv[0])
    for (int i = 1; argv[i] != NULL; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}

