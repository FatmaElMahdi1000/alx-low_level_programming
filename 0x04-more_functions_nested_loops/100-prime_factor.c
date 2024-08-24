#include "main.h"

/**
 * main - Entry point
 *
 * Descrition: get the largest factor
 *
 * Return: largest factor
*/
int main(void)
{
	unsigned long long x;
	unsigned long long n = 612852475143;
	unsigned long long *numbers;
	int i;
	int j = 0;

	numbers = malloc(100 * sizeof(unsigned long long));

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
				printf("%lld\n", x);
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
		printf("numbers[%d]: %lld\n", i, numbers[i]);
	}

	free(numbers);

	return (0);
}
