#include <stdio.h>

/**
* main - all
* Return: 0
*/

int main(void)
{
	int a = 97;
	/* while loop execution */
	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
