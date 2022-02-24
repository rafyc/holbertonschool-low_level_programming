#include "main.h"

/**
 * _sqrt - calculate the square
 * @n: base number
 * @x: increment
 * Return: square root
 */


int _sqrt(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x = n)
	{
		return (1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - calculate the whole function
 * @n: base number
 * Return: square root
 */

int is_prime_number(int n)
{

	if (n < 2)
	{
		return (0);
	}
	return (_sqrt(n, 2));
}
