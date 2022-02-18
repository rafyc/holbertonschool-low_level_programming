#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
			
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
