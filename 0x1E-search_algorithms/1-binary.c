#include "search_algos.h"

/**
* print_array - Function that print
* @array: The array to search in
* @left: the left pointer
* @right: the right pointer
* Return: nothing
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search - Function that find the value
* @array: The array to search in
* @value: the value to find
* @size: size of the array
* Return: the index of the value to find
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r =  size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		size_t m = l + (r - l) / 2;

		print_array(array, l, r);
		/**Check if value is present at mid*/
		if (value == array[m])
			return (m);

		/**If value greater, ignore left half*/
		if (value > array[m])
			l = m + 1;

		/** If value is smaller, ignore right half*/
		else
			r = m - 1;
	}
	/**if we reach here, then element was*/
	/**not present*/
	return (-1);
}
