#include "main.h"

/**
* print_last_digit - main function
* Return: 0
* @n: nombre à tester
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
	else
	{
		return (n % 10);
	}
	_putchar('0' + n);
	_putchar('\n');
}
