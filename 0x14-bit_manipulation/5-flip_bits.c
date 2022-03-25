#include "main.h"

/**
 * flip_bits - check the code
 * @n: param1
 * @m: param2
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while ((n != 0) || (n != 0))
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}

	return (i);
}
