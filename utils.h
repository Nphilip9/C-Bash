#ifndef BASHUTILS
#define BASHUTILS

    // splitString breaks *str string into a series of tokens using the delimeter.
    // *str = string to truncate
    // *delimeter = string that contains the delimeter characters
    // Returns a char* with the splitted string
    // Returns the orginally string when the delimeter is not found
    extern char *splitString(char *str, const char *delimeter);

    extern char *getCurrentDirectory();

#endif