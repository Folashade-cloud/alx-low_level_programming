#include "main.h"
#include <stdio.h>


/**
 * print_array - prints elements of an array of integers,
 * with a new line
 * @n: Number of elements of the array to be printed
 * @a: Array
 *
 * Return: void
 */

void print_array(int *a, int n)

{
int b;
for (b = 0; b < n; b++)
{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
		printf(", ");
	}
}
printf("\n");
}
