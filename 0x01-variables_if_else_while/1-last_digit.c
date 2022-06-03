#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)  
{
int n, digit

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Enter a number:");
scanf("%d",&n);
digit=n%10;
printf("Last digit is: %d",digit);
 if (n>5)
   printf("and is greater than 5:",digit);
 if else (n==0)
   printf("and is 0:" ,digit);
 if else (n<6)
	   printf("and is less than 6 and not 0:" ,digit);
return (0);
}
