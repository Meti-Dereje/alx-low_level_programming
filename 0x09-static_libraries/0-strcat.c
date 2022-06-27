#include "main.h"
#include <stdio.h>
/**
* strcat - Concatenates the string pointed to by
* @src, including the terminating
* null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/

char *strcat(char *dest, const char *src)
{
int len = 0, i = 0;
while (dest[len] != '\0')
{
len++;
}
while (src[i] != '\0')
{
dest[len] = src[i];
len++;
i++;
}
dest[len] = '\0';
return (dest);
}
