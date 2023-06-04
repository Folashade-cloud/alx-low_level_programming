#include "main.h"
/**
 * main - function that print "a" - "z" with _potchar
 *
 * Retun: Always 0
 */

void print_alphabet(void);
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
