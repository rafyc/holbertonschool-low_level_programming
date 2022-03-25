#include "main.h"

/**
 * set_bit - check the code
 * @n: param1
 * @index: param2
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || n == NULL)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
