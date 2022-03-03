#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - main proto
 * @size: param 1
 * @nmemb: param 2
 * Return: p;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int psize = nmemb * size;
	unsigned int i = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(psize);
	if (p == 0)
		return (NULL);

	for (i = 0; i < psize; i++)
		p[i] = 0;

	return (p);
}
