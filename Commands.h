#ifndef BASH
#define BASH

    #define MAXCOMMANDLENGTH 100

    // Constant Variables that define what type of system information the user wants
    #define UNAME_STANDARD 0    // Standard = only kernel name
    #define UNAME_ALL 1         // All = prints all posible information of the OS    
    #define UNAME_NODENAME 2    // Nodename = prints the network hostname

    extern char *currentDirectorie;

    // prints all supported commands
    extern void help();

    // echo displays a line of text 
    // *str = text to display
    extern void echo(const char *str);

    // clears only the the "C-bash", does not affect the original bash
    extern void clear();

    // ls lists content of a directory
    // *path = list content of the path (path canno't tbe a file)
    // default path = current directory
    extern void ls(const char *path);

    // print the name of current directory
    extern void pwd();

    // remove files or directories (recursive mode on directories)
    // *path = filepath to remove
    extern void rm(char *path);

    // copy files and directories
    // copy *source to *destination
    extern void cp(char *source, char *destination);

    // move files and directories
    // move *source to *destination
    extern void mv(char *source, char *destination);

    // make directories
    // *dirName = name of directorie
    extern void mkdir(const char *dirName);

    // make file
    // *fileName = name of file
    extern void touch(const char *fileName);

    // concatenate files and print on the standard output
    // *file = file to print content off
    extern void cat(char *file);

    // prints system information
    // infoType = type of information of the OS to display
    extern void uname(const int infoType);

    // prints the history of used commands
    // Format: [dd.mm.yyyy - hh:mm:ss] ...
    extern void history();

    // list content of directories in a tree like format
    // path = path to print content of
    // path = default is current location
    extern void tree(char *path);

    // kills the process with the given ID
    extern void kill(const unsigned int PID);
#endif