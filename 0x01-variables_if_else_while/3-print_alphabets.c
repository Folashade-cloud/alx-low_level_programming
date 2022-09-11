#include <stdio.h>

#include<ctype.h>

/**
 * main - is the entry point
 *
 * Description: printing the alphabet in lowercase, and then in uppercase.
 *
 * Return: returns
 *
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
	putchar(lower);
	lower++;
	}
	while (upper <= 'Z')
	{
	putchar(upper);
	upper++;
	}
	putchar('\n');
	return (0);
}
