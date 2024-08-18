#include "main.h"

/**
 * fc - for fibonacci
 *
 *@n: Length
 *
 * Return: fibonacci sequence
*/

int fc(int n)
{
	int i;
	int sum;
	unsigned long long number1 = 1;
	unsigned long long number2 = 2;

	if (n <= 0)
	{
		fprintf(stderr, "ERROR\n");
	}
	printf("%d, %d, ", number1, number2);

	for (i = 2; i < n; i++)
	{
		sum = number1 + number2;
		printf("%d", sum);

		number1 = number2;

		number2 = sum;

		if (i != n - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

/**
 *main - Entry point
 *
 * Description: seq.
 * Return: 0 success
**/

int main(void)
{
	int n = 51;

	fc(n);

	return (0);
}
