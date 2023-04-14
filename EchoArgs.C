#include <stdio.h>

int main(int argc, char *argv[])
{
        //argc is an integer that represents the number of arguments.
        //argv is a pointer that points to a string (a char array) that stores the argument strings.

    while           //while is a loop type in C. the format is "while(condition is met) {this happens;}"
    (--argc > 0)      //--argc removes the command from the index of arguments, while loop depends on the condition that newargc > 0
    printf
    (
        (argc > 0)
        ?           //?: is the if-else in C. (condition) ? this : else, that
        "%s ": "%s ", *(++argv)       //%s is the format specifier for string.
    );
    printf("\n");       //linebreak
    return 0;
}