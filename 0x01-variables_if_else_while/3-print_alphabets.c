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
	while ((a < 123) && (b < 90))
	{
		putchar(a);
		a++;
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
