#include <stdio.h>

/**
* main - void
* Return: zero 0.
*/

unsigned long diviseur;
unsigned long nombre = 612852475143;

int main(void)
{
	for (diviseur = 2; nombre > diviseur; diviseur++)
	{
		while (nombre % diviseur == 0)
		{
			nombre = (nombre / diviseur);
		}
	}
	printf("%lu\n", diviseur);
	return (0);
}
