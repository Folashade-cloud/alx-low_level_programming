#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *	with putchar function
 *
 * Return: 0 Always
 */
int main(void)
{
	int decimal;

	for (decimal = 0; decimal < 10; decimal++)
	{
		putchar(decimal + ('0' - 0));

		if (decimal != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
