#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int space;
	int signe;
	int ligne;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (ligne = 0; ligne < size; ligne++)
	{
		for (space = 1; space < size - ligne; space++)
		{
			_putchar(' ');
		}
		for (signe = 0; signe <= size - space; signe++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
