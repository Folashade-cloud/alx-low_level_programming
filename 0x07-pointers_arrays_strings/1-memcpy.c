#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer pointing to a char
 * @src: pointer to character source
 * @n: higest no of byte of memory to be used
 *
 * Description: function that copies n bytes from src to dest memory area
 *
 * Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
