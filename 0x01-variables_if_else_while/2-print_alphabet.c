#include <stdio.h>

/**
 * main - program that print alphabet in small letters
 *
 * Return: return 0
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = a; alphabet <= z; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
