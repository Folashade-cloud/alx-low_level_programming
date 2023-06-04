#include <stdio.h>

/**
 * main - prints the numbers of base 16 ie 0-9 and a-f
 *
 * Return: 0 Always
 */
int main(void)
{
	char base16;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}
	for (base16 = 'a'; base16 < 'g'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');

	return (0);
}
