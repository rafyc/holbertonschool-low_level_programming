#include "main.h"

/**
 * _puts_recursion - main function
 * @s: param 1
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
