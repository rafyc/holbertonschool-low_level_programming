#include "main.h"

/**
 * factorial - main function
 * @n: param1
 * Return: int
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}

	return n * factorial(n -  1);
}
