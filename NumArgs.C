#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Counting the command, You have entered %d arguments!\n", argc);
    printf("Not counting the command, you have entered %d arguments!\n", --argc);
    return 0;
}