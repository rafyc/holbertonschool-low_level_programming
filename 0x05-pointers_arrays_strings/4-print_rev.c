#include "main.h"

/**
 * print_rev - main function
 * @s: param
 * Return: Always 0.
 */

void print_rev(char *s) 
{
	int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		i++;		
	}

	while (s[i] >= b )
	{
		_putchar(s[i]);
		i--;
		_putchar('\n');
	}
}
