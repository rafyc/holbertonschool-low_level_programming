#include "main.h"

/**
 * factorial - main function
 * @n: param1
 * Return: int
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return n * factorial(n -  1);

}
