#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - main function
 * @separator: param1
 * @n: param1
 * Return: noting
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int num;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (i < n - 1 && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
