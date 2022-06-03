#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
/*function goes here */
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Enter the number n: ");
scanf("%i", &n);
if(n > 0)
printf("%i is a positive number \n", n);
else if(n < 0)
printf("%i is a negetive number \n", n);
else if(n == 0)
printf("%i is zero \n", n);
return (0);
}
