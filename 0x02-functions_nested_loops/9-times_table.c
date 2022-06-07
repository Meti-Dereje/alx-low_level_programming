#include <stdi.h>
/**
* main - check the code
*
* Return: Always 0.
*/
void times_table(void);
{
int n, M, A;
for (n = 0; n <=9; n++)
_putchar('0);
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
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}
