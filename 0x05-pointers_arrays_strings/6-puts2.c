#include "main.h"
#include <string.h>


/**
 * puts2 - print every other character
 * @str: string
 */

void puts2(char *str)
{
int len;
int i;
	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
