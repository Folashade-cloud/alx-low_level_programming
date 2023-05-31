#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string to be print printed
 *  Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
