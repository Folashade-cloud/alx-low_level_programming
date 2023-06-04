#include <stdio.h>

/**
 * main - program that prints 0 - 9 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
	putchar(number + '0');
	}
	putchar('\n');

	return (0);
}
