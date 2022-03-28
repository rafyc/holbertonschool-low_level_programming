#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - main proto
 * @array: param1
 * @action : param3
 * @size: param2
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != 0 && array != 0 && size != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
