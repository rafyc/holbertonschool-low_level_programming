#include "main.h"

/**
 * puts2- main function
 * @str: main param
 * Return: Always 0.
 */

void puts2(char *str)
{
	long i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
