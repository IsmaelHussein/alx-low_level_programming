#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  Determine if a random number is positive or negative
*
* Return: 0 on success
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
	printf("%d is negative", n);
else if (n > 0)
	printf("%d is positive", n);
else
	printf("%d is zero", n);
printf("\n");
return (0);
}
