#include "main.h"

/**
 * _puts_recursion - main function
 * @s: param 1
 * Return: none
 */

void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
