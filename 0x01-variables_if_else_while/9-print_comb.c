#include <stdio.h>
/**
* main - all
* Return: 0
*/

int main(void)
{
	int a = 48;
	int b = 44;
	int c = 32;
	/* while loop execution */
	while (a < 57)
	{
		putchar(a);
		putchar(b);
		putchar(c);
		a++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
