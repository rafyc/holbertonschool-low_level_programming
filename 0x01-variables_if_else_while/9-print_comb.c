#include <stdio.h>
/**
* main - all
* Return: 0
*/

int main(void)
{
	int a = 48;
	/* while loop execution */
	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
