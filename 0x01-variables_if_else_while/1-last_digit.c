#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Assign a random number to the variable
*
* Return: 0 on success
*/

int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here*/
last = n % 10;
if (last > 5)
	printf("Last digit of %d is %d and is greater than 5", n, last);
else if (n == 0)
	printf("Last digit of %d is %d and is 0", n, last);
else
	printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
printf("\n");
return (0);
}
