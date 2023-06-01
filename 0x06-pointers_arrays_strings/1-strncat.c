#include "main.h"
#include <string.h>

/**
 * _strncat - string concatenation.
 * @dest: destination
 * @src: source
 * @n: additional parameter
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
