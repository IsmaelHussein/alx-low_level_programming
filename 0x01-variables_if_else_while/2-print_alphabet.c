#include <stdlib.h>
#include <ctype.h>

/**
* main - Prints the alphabet in lowercase
*
* Return: 0 on success
*/

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
