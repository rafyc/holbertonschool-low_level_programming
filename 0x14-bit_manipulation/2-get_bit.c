#include "main.h"

/**
 * get_bit - check the code
 * @n: param 1
 * @index: param 2
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	return (-1);

	return ((n >> index) & 1);
}
