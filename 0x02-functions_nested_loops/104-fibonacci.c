#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Fibonacci: Find and print the first 98 fibom number from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a1 = 0, n1 = 1, a2 = 0, n2 = 2;
	unsigned long int temp1, temp2, temp3;
	int count;

	printf("%lu, %lu,\n", n1, n2);
	for (count = 2; count < 98; count++)
	{
		if (n1 + n2 > LARGEST || a2 > 0 || a1 > 0)
		{
			temp1 = (n1 + n2) / LARGEST;
			temp2 = (n1 + n2) % LARGEST;
			temp3 = a1 + a2 + temp1;
			a1 = a2, a2 = temp3;
			n1 = n2, n2 = temp2;
			printf("%lu%010lu", a2, n2);
		}
		else
		{
			temp2 = n1 + n2;
			n1 = n2, n2 = temp2;
			printf("%lu", n2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
