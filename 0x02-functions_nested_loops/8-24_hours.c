#include "main.h"
/**
*jack_bauer - Prints every minute of the day of
*              Jack Bauer, starting from 00:00 to 23:59.
*/
int main(void)
{
int H, M;
for (H = 0; H <= 23; H++)
{

for (M = 0; M <= 59; M++)
{
_putchar((H / 10) + '0');
_putchar((H % 10) + '0');
_putchar(':');
_putchar((M / 10) + '0');
_putchar((M % 10) + '0');
_putchar('\n');
}
}
}
