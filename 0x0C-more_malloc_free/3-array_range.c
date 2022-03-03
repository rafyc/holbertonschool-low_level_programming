#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: param 1
 * @max: param2
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int size = (max - min) + 1;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == 0)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
