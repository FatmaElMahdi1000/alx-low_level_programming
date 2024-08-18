#include "main.h"

/**
 * fc - for fibonacci
 *
 *@n: Length
 *
 * Return: fibonacci sequence
*/

unsigned long long int fc(int n)
{
	int i;
	unsigned long long int sum;
	unsigned long long int number1 = 1;
	unsigned long long int number2 = 2;

	if (n <= 0)
	{
		fprintf(stderr, "ERROR\n");
	}
	printf("%lld, %lld, ", number1, number2);

	for (i = 2; i < n; i++)
	{
		sum = number1 + number2;
		printf("%lld", sum);

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
