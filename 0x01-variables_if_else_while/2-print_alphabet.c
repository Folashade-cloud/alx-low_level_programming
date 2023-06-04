#include <stdio.h>

/**
 * main - program that print alphabet in small letters
 *
 * Return: return 0
 */
int main(void)
{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
