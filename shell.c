#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t bufsize = 0;

    while (1) {
        printf("$ ");
        fflush(stdout); // Flush the output buffer to ensure "$ " is printed immediately.

        // Read the user input line
        ssize_t read = getline(&line, &bufsize, stdin);

        // Check for end-of-file or error condition
        if (read == -1) {
            break;
        }

        // Print the user's input command
        printf("%s", line);
    }

    // Free the dynamically allocated line buffer
    free(line);

    return 0;
}

