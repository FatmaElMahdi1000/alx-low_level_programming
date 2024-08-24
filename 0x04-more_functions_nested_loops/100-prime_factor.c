#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Descrition: get the largest factor
 *
 * Return: largest factor
*/
int main(void)
{
	long x;
	long n = 612852475143;
	long *numbers;
	int i;
	int j = 0;

	numbers = malloc(100 * sizeof(long));

	if (numbers == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (1);
	}

	for (x = 2; x <= n; x++)
	{
		while (n)
		{
			if (n % x == 0)
			{
				printf("%ld\n", x);
				numbers[j] = x;
				j++;
				n = n / x;
			}
			else
			{
				break;
			}
		}
	}

	for (i = j - 1; i < j; i++)
	{
		printf("numbers[%d]: %ld\n", i, numbers[i]);
	}

	free(numbers);

	return (0);
}
