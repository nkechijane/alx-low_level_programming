#include<stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	long int result;
	long int n1 = 1, n2 = 2, nlimit = 50;

	printf("%lu, %lu,\n", n1, n2);
	for (i = 2; i < nlimit; i++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu\n", result);
		if (i != nlimit - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
