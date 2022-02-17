#include "main.h"

/**
 * print_array - main
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int i = 0;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
