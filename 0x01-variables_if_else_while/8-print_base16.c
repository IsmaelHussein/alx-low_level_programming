#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: 0 on success
*/

int main(void)
{
int i;
char hex_digits[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
	putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}
