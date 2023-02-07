#include <stdio.h>
#include "Commands.h"
#include <stdlib.h>

int main() {
    char *command = malloc(MAXCOMMANDLENGTH * sizeof(char));
    // char **splittedCommand = malloc(10 * sizeof(char));
    // TODO: Split *command on whitespaces (strtok)

    while (1) {
        printf(">");
        fgets(command, MAXCOMMANDLENGTH, stdin);
        help();
    }
    free(command);
    return 0;
}
