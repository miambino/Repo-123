#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Counting the command, You have entered %d arguments:\n", argc);
   for (int i = 0; i < argc; i++)
   {
        printf("%d %s \n", i, argv[i]);
   }
 
    printf("\n");
    return 0;

}