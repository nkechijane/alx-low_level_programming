#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 *
 */

void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; i++)
		{
			multi = i * j;
			if (j == 0)
			_putchar('0' + multi);
			else if (multi < 10)
			{
				_putchar(' ');
				_putchar('0' + multi);
			}
			else
			{
				_putchar('0' + (multi / 10));
				_putchar('0' + (multi % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
