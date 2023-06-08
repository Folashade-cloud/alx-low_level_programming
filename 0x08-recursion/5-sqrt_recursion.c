#include "main.h"

/**
* chksqrt - function that return sqr root of an integer
* @n: int n
* @num: int num
* Return: result of the computation
*/
int chksqrt(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	return (chksqrt(n, num + 1));

}

/**
* _sqrt_recursion - a function that returns the square root of an integer
* @n: number to evaluate
* Return: result
*/

int _sqrt_recursion(int n)
{

	return (chksqrt(n, 1));
}
