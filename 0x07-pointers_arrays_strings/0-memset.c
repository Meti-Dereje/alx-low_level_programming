#include "main.h"
/**
* memset - Fills the first n bytes of the memory area
* pointed to by @s with the constant byte @c.
* @s: A pointer to the memory area to be filled.
* @c: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return:a ponter that filled memory .
*/

void *_memset(void *s, int c, size_t n)
{
unsigned int bytes = 0;
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
