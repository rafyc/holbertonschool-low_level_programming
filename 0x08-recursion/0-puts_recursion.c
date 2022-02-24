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
		_putchar(s*);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
