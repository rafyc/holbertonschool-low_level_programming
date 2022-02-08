#include "main.h"

/**
* print_last_digit - main function
* Return: 0
* @n: nombre à tester
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
