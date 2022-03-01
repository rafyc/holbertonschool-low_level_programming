#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main prototype
 * @width: param1
 * @height: param2
 *
 * Return: .
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **arr;

	arr = malloc(height * sizeof(int*));

	for (i = 0; i <= height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		for (j = 0; j <= width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
