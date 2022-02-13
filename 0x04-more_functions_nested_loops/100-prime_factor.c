#include <stdio.h>

/**
* main - void
* Return: zero 0.
*/
int main(void)
{
	int diviseur;
	long int nombre = 612852475143;
	{
		for (diviseur = 2; nombre > diviseur; diviseur++)
		{
			while (nombre % diviseur == 0)
			{
				nombre = (nombre / diviseur);
			}
		}
		printf("%d\n", diviseur);
		return (0);
}
