#include "main.h"

/**
 * print_binary - check the code
 * @n: param 1
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
