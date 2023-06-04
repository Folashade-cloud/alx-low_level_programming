#include <stdio.h>

/**
 * main - print z - a with putchar
 *
 * Return: 0
 */

int main(void)
{
	char reverseAlpha;

	for (reverseAlpha = 'z'; reverseAlpha >= 'a'; reverseAlpha--)
	{
	putchar(reverseAlpha);
	}
	putchar('\n');

	return (0);
}
