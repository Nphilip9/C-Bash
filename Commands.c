#include <stdio.h>
#include "Commands.h"
#include <stdlib.h>
#include <string.h>

int main() {
    char *command = malloc(MAXCOMMANDLENGTH * sizeof(char));
    // char **splittedCommand = malloc(10 * sizeof(char));
    // TODO: Split *command on whitespaces (strtok)

    while (1) {
        printf(">");
        fgets(command, MAXCOMMANDLENGTH, stdin);
        printf("\e[1;1H\e[2J");
    }
    free(command);
    return 0;
}

void echo(const char *str) {
    printf("%s\n", str);
}