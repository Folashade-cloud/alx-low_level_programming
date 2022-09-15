#include "main.h"

/**
 * print_alphabet - prints alphabets in small letters
 *
 */

void print_alphabet_x10(void);
{

	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
