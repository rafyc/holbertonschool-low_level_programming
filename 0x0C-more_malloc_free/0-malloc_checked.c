#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - check the code
 * @b: param 1
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
