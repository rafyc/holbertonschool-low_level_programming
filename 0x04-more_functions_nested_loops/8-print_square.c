#include "main.h"

/**
 * print_square - check the code
 * @size: size
 * Return: Always 0.
 */

void print_square(int size)
{
	int column;
	int ligne;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else {
		for (ligne = 0; ligne < size; ligne ++)
		{
			for (column = 0; column < size; column ++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
