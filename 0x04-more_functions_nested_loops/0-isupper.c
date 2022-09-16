#include "main.h"

/**
 * _isupper - define an uppercase character
 *
 * Description: Prints the alphabet with _putchar
 * @c: charater to be tested
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
