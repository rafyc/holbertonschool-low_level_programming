#include "main.h"

/**
 * prime - calculate the prime
 * @n: base number
 * @x: increment
 * Return: is prime
 */


int prime(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x > n / 2)
	{
		return (1);
	}
	return (prime(n, x + 1));
}

/**
 * is_prime_number - calculate the whole function
 * @n: base number
 * Return: square root
 */

int is_prime_number(int n)
{

	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}
