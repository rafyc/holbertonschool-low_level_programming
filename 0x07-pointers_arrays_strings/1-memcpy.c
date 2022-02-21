#include "main.h"

/**
 * _memcpy -  main function
 * @dest: param1
 * @src: param2
 * @n : param3
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
