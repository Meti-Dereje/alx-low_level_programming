#include <stdio.h>
#include "main.h"
/**
*print the number of arguments passed to it.
*argc: the number of arguments supplied to the program.
*return: always 0
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d/n", argc - 1);
return (0);
}
