#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
