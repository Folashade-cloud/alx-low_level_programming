#include "main.h"

/**
 * swap_int - swipe the values of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
