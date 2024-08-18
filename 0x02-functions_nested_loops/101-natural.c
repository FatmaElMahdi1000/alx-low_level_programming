#include"main.h"
/**
 * multiples - Getting the sum of multiples
 *
 * Description: Computes the sum
 *
 * @n: user input
 *
 * Return: multiples of 3 or 5, 0 means success
**/

int multiples(int n)
{
	int i;
	int sum = 0;

	if (n <= 0)
	{
		fprintf(stderr, "ERROR\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * main - Entry point
 *
 * Description: This is the starting point
 *
 * Return: 0 means success
**/

int main(void)
{
	int n = 1024;

	multiples(n);

	return (0);
}
