/*
* File: 2-print_alphabet.c
* Auth: Brennan D Baraban
*/

#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0.
*/

int main( )

/*
* main function prints lowercase alphabet
*/
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
