#include <stdio.h>
#include<ctype.h>

/**
 * main - Print alphabet in both lower and upper case
 * Return: returns 0
 */

int main(void)
{
	char small = 'a';
	char capital  = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
