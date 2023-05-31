#include "main.h"
#include <string.h>


/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string parameter
 */
void puts_half(char *str)

{
int a;
int b;
int i;

a = strlen(str);
if (a % 2 == 1)
{
	b = a / 2 + 1;
}
else
{
	b = a / 2;
}
for (i = b; i < a; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
