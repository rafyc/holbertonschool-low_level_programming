#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: param1
 * Return: return int
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
