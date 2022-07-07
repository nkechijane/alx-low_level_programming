#include "main.h"

/**
 * print_to_98 - print all natural numbers from var to 98
 * @var: the statrting limit
 *
 */

void print_to_98(int var)
{
	int stop = 98;

	if (var > stop)
	{
		int i;

		for (i = var; i >= stop; i--)
		{
			print(i);
			if (i != stop)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int j;

		for (j != stop)
		{
			print(j);
			if (j != stop)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - to print
 * @n: var
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
