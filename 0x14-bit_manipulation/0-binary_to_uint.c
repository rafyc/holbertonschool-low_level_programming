#include "main.h"

/**
 * binary_to_uint - main func
 * @b: para1
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j;
	unsigned int res = 0;
	unsigned int mult = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;
	j = i;

	while (j >= 0)
	{
		if (j != i)
			mult *= 2;
		if (b[j] == '1')
			res += mult;
		j--;
	}

	return (res);
}
