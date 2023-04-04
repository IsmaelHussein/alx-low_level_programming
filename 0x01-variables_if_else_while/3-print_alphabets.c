#include <stdio.h>

/**
* main - Printing lowercase and uppercase alphabet
*
* Return: 0 on success
*/

int main(void)
{
int i;
/* Printing lowercase alphabet*/
for (i = 0; i < 26; i++)
	putchar(i + 97);
/* Printing uppercase alphabet*/
for (i = 0; i < 26; i++)
	putchar(i + 65);
/* Printing new line*/
	putchar('\n');
return (0);
}
