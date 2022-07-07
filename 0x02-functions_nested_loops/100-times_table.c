#include "main.h"

/**
 * print -function to print recursively using _putchar
 * @var: variable to be printed
 */

void print(int var)
{
	if (var / 10)
		print(var / 10);

	_putchar('0' + (var % 10));
}

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: time table to print
 *
 */

void print_times_table(int n)
{
	int i, j, multi;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multi = i * j;
			if (j == 0)
				_putchar('0' + multi);
			else if (multi < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multi);
			}
			else if (multi < 100)
			{
				_putchar(' ');
				print(multi);
			}
			else
			{
				print(multi);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
