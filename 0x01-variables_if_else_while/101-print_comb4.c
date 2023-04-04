#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, printed;

	printed = 0;
	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (printed)
				{
					putchar(',');
					putchar(' ');
				}
				printed = 1;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
		}
	}

	putchar('\n');
	return (0);
}

