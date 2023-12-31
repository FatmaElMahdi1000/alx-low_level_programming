#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:A program that prints the numbers from 1 to 100
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && !(num % 3 == 0))
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
