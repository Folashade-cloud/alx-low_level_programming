#include "main.h"

/**
* _puts_recursion - function that print a string, plus new line
* @s:string inputed
* Return:void
*/
int _putchar(char c)
void _puts_recursion(char *s)
{
	int counter = 0;

	if (*(s + counter) != '\0')
{
	_putchar(*(s + counter));
	counter++;
	_puts_recursion(s + counter);
}
else
{
	_putchar('\n');
}

}
