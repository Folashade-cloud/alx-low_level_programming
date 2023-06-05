#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: highest byte of memory fill
 *
 * Description: function fills the first item of n bytes of the
 *	memory area pointed to by s with the constant byte b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
