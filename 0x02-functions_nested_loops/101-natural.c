#include <stdio.h>

/**
 * main - find sum of multiples of 3 and 5 less than 1034
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, _sum;

	for (i = 3; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			_sum += i;
	}
	printf("%d\n", _sum);
	return (0);
}
