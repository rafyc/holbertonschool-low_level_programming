#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *  - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int w;

	if (argc != 4)
	{
		printf("1Error\n");
		exit (98);
	}

	(void)argc;
	
	w = atoi(argv[2]);

	if (w != '+' || w != '-' || w != '*' || w != '%' || w != '/')
	{
		printf("2Error\n");
		exit (99);
	}


	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf ("%d\n", get_op_func(argv[2])(x, y));
	return (0);
}
