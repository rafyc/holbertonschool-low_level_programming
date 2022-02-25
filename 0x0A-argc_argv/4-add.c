#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - fonction
 * @argc: param
 * @argv: param
 * Return: rien
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
		return (0);
}
