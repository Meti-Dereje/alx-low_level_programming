#include "main.h"
/**
* *_memset - Fills the first n bytes of the memory
* pointed to by @s with the constant byte @c.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return:a ponter that filled memory .
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
*(s + a) = b;
}
return (s);
}
