#include "main.h"
/**
 * times_table - main
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			d = c % 10;
			e = c / 10;

			if (c < 10)
			{
				_putchar('0' + c);
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + e);
				_putchar('0' + d);
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
