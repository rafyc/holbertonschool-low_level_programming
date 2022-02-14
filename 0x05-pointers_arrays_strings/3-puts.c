#include "main.h"
/**
* _puts - main function
* @str: main
* Return: Always 0.
*/

void _puts(char *str)
{
	int i = -1;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
