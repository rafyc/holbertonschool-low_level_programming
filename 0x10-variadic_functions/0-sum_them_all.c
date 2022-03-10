#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main function
 * @n: 1st param
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned  int);
	}
	va_end(list);
	return (sum);
}
