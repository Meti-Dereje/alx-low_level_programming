#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Enter the number n: ");
scanf("%d", &n);
if(n > 0)
printf("%d is a positive number \n", n);
else if(n < 0)
printf("%d is a negetive number \n", n);
else if(n == 0)
printf("%d is zero \n", n);
return (0);
}
