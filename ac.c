#include <stdio.h>

int main(int argc, char **argv) {
    printf("Number of command-line arguments: %d\n", argc);

    // Print all command-line arguments
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}

