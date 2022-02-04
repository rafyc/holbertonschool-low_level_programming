#include <stdio.h>

/**
* main - all
* Return: 0
*/

int main(void)
{
	int a = 97;
	int b = 65;
	/* while loop execution */
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
