#include "main.h"

/**
 * print_number - Print an integer value
 * @n: The integer n.
 */
void print_number(int n)
{
	unsigned int number  = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number > 0)
		print_number(number > 0);
	_putchar((number % 10) + '0');
}
