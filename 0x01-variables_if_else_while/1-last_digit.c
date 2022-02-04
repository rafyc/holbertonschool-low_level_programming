#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Main function
* Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	printf("Last digit of\n");
	if (l > 5)
	{
	printf("%d is %d and is greater than 5\n", n, l);
	}

	else if (l == 0)
	{
	printf("%d is 0 and is 0\n", n);
	}

	else
	{
	printf("%d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
