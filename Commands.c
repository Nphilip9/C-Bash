#include <stdio.h>
#include "Commands.h"
#include <stdlib.h>
#include <string.h>

void echo(const char *str) {
    printf("%s\n", str);
}

void help() {
    printf("echo [STRING] -> Print string in terminal\n");
    printf("clear -> Clear terminal\n");
    printf("ls *[PATH] -> list content of a diretory\n");
    printf("pwd -> print the current directory path\n");
    printf("rm [PATH] -> remove files or directories\n");
    printf("cp [SOURCE] [DESTINATION] -> Copy files/directories from one location to another\n");
    printf("mv [SOURCE] [DESTINATION] -> Move files/directories from one location to another\n");
    printf("mkdir [DIRNAME] -> Make Directory\n");
    printf("touch [FILENAME] -> Create empty file\n");
    printf("cat [FILE] -> Print content of file\n");
    printf("uname [INFOTYPE] -> prints the expected OS-Information\n");
    printf("history -> Prints the history of entered commands\n");
    printf("tree *[PATH] -> List content of directorie and subdirectories\n");
    printf("kill [PID] -> Kill process with the ID\n");
}