#include <stdio.h>

/**
* print_to_98 - main
* @n: numbre a tester
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
