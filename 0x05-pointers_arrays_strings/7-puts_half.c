#include "main.h"

/**
 * puts_half - main function
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0 ;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	
	j = i / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j - 1]);
		j++;
	}
	_putchar('\n');
}
