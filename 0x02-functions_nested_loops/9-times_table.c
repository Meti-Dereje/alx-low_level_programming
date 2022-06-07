#include "main.h"
/**
*times_table - Prints the 9 times table, starting with 0.
* 
*/
void times_table(void)
{
int n, M, A;
for (n = 0; n <=9; n++)
_putchar('0');
{
for (M = 0; M <= 9; M++)
{
_putchar(',');
_putchar(' ');
A = n * M;
if (A <= 9)
_putchar(' ');
else
_putchar((A / 10) + '0');
_putchar((A % 10) + '0');
}
_putchar('\n');
}
}
