#include <stdio.h>
#include <stdlib.h>

/**
 * main - maint function
 * @argc: count
 * @argv: vector string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}

	printf("%d\n", mul);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}