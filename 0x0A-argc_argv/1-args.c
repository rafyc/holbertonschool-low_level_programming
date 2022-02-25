#include <stdio.h>
#include <stdlib.h>

/**
 * main - maint function
 * @argc: count
 * @argv: vector string
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
