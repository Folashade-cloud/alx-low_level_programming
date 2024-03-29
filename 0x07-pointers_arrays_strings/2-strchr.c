#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to search for char
 * @c: char to search for
 *
 * Return:  pointer to the first character c in the string s,
 *	otherwise  NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
