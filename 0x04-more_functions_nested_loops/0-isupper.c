#include "main.h"

/**
 * _isupper - function to checks for uppercase character
 * @c: character in decimal guided by ascii table
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
