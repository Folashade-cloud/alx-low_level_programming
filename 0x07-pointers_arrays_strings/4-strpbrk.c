#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: substring
 *
 * Description: locates the first occurrence in the string s
 *		of any of the bytes in the string accept
 *
 * Return: a pointer to the byte in s that matches one of
 *		the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int counter, i;

	counter = 0;
	while (*(s + counter))
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *(s + counter))
			{
				return ((s + counter));
			}

		}

		counter++;
	}
	return (NULL);
}
