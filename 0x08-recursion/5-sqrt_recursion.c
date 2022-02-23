#include "main.h"

/**
 * _sqrt - calculate the square
 * @n: base number
 * @x: increment
 * Return: square root
 */


int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - calculate the whole function
 * @n: base number
 * Return: square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
