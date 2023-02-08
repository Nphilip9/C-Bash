#include <stdio.h>
#include "Commands.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *currentDirectorie;

int main() {
    char *command = malloc(MAXCOMMANDLENGTH * sizeof(char));
    currentDirectorie = getcwd(NULL, 0);
    while (1) {
        printf("%s >", currentDirectorie);
        fgets(command, MAXCOMMANDLENGTH, stdin);

        int commandlength = strlen(command);
        command[commandlength - 1] = '\0';

        if(strcmp(command, "echo") == 0) {
            printf("Hallo\n");
        } else if(strcmp(command, "clear") == 0) {
            printf(currentDirectorie);
            currentDirectorie = getcwd(NULL, 0);
            printf(currentDirectorie);
        } else if (strcmp(command, "ls")) {

        } else if (strcmp(command, "pwd")) {
            
        } else if (strcmp(command, "rm")) {
            
        } else if (strcmp(command, "cp")) {
            
        } else if (strcmp(command, "mv")) {
            
        } else if (strcmp(command, "mkdir")) {
            
        } else if (strcmp(command, "touch")) {
            
        } else if (strcmp(command, "cat")) {
            
        } else if (strcmp(command, "uname")) {
            
        } else if (strcmp(command, "history")) {
            
        } else if (strcmp(command, "tree")) {
            
        } else if (strcmp(command, "kill")) {
            
        } 
        else {}
    }
    free(command);
    return 0;
}
