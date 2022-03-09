#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - main proto
 * @array: param1
 * @size: param2
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{	i++;
		action(array[i]);
	}
}
