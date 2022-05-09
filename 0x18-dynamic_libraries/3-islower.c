#include "main.h"

/**
* _islower - Main function
* Return: 1 ou 0
* @c: caractere à tester
*/

int _islower(int c)
{

	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

