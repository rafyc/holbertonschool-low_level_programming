#include <stdio.h>

/**
* main - main
* Return: 0
*/

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (a < 56)
	{
		putchar(a);
		putchar(b);
		putchar(c);
		if (a < 55)
		{
			putchar(',');
			putchar(' ');
		}
		if (b == 56)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
		else if (c == 57)
		{
			b++;
			c = b + 1;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
