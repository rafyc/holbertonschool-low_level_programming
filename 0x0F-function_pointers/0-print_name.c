#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main function
 * @name: pointer param 1
 * @f: pointer param2
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
