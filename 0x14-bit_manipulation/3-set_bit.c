#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || n == NULL)
		return (-1);

	*n = *n | (1 << index); 
	return(1)

}
