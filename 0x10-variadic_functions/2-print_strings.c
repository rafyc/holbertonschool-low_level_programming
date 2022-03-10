#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - main function
 * @separator: param1
 * @n: param1
 * Return: noting
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char*);

			if (str == NULL)
				printf("(nill)");
			else
				printf("%s", str);

			if (i < n - 1 && separator != 0)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
}
