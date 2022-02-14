#include "main.h"

/**
* swap_int - prototype
* @a: param 1
* @b: param 2
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int a1 = *a;

	*a = *b;
	*b = a1;
}
