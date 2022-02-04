#include <stdio.h>

/**
* main - all
* Return: 0
*/

int main(void)
{
	int a = 48;
	int b = 97;
	/* while loop execution */
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
