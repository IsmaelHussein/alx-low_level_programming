#include <stdio.h>

/**
* main -  Determine if a random number is positive or negative
*
* Return: 0 on success
*/

int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
	for (j = i + 1; j < 10; j++)
		for (k = j + 1; k < 10; k++)
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			putchar(k + '0');
			putchar(',');
			putchar(' ');
}
putchar('\n');
return (0);
}
