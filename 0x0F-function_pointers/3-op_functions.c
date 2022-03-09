#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addititon
 * @a: param1
 * @b: paramb
 * Return: int
*/ 

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: param1
 * @b: paramb
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: param1
 * @b: paramb
 * Return: int
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: param1
 * @b: paramb
 * Return: int
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: The operator
 * @b: param2
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
