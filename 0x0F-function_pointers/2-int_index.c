#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - main function
 * @array: param1
 * @size: param2
 * @cmp: param3
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
