#include "main.h"

/**
 * fibonacci - fib. seq.
 * @n: sequence length
 * Return: sequence of sum of the even-valued terms
 *
**/
int fibonacci(int n)
{
	int number1 = 1;
	int number2 = 2;
	int i;
	int sum;
	int even_sum = 0;
	int even_count = 0;

	if (n <= 0)
	{
		fprintf(stderr, "ERROR");
		return (1);
	}

	for (i = 2; i < n; i++)
	{
		sum = number1 + number2;
		if (sum > 5000000)
		{
			break;
		}

		if (sum % 2 == 0)

		{
			even_sum += sum;
			even_count++;
		}
		number1 = number2;
		number2 = sum;
	}
	printf("%d\n", even_sum);
	return (0);
}
/**
 * main - Entry point
 *
 * Return: 0 means success
**/

int main(void)
{
	int n = 55;

	fibonacci(n);
	return (0);
}
