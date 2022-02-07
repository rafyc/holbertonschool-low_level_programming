#include <stdio.h>

/**
* main - main
* Return: return
*/

int main(void)
	{
		int a = 48;
		int b = 49;

		while (a < 57)
		{
			putchar(a);
			putchar(b);

			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}

			if (b == 57)
			{
				a++;
				b = a + 1;
			}
			else
			{
				b++;
			}
		}
		putchar('\n');
		return (0);
	}
