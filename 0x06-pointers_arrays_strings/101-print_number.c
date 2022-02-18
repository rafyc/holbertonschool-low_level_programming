#include "main.h"

/**
 * print_number - main proto
 * @n: param
 * Return: void
 */

void print_number(int n)
{
	int div = 1;

	if (n == -2147483647)
	{
		n = n + 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n / (div * 10) != 0)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
	}
}
