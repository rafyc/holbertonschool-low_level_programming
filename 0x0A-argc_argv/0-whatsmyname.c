#include <stdio.h>
#include <stdlib.h>

/**
 * main - maint function
 * @argv: vector string
 * @argc: count
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
