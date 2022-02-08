#include "main.h"

/**
* print_alphabet_x10 - function
* Return: 0
*/

void print_alphabet_x10(void)
{
	int i;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
