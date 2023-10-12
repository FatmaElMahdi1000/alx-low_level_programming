#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 *
 * positive_or_negative - prints if integer is positive or negative
 *
 * c - is int our argument
 *
 * Return: Always 0 (success)
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else
	{
		printf("%i is zero\n", i);
	}
}

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
