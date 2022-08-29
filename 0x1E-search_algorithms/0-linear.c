#include "search_algos.h"
/**
* linear_search - function that search
* @array: The array to search
* @size: Size of the array
* @value: Value to search
* Return: index or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
