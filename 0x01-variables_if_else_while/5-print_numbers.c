#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: a program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int Base10 = 0;

	while (Base10 <= 9)
	{
		printf("%i", Base10);
		Base10++;
	}
	printf("\n");

	return (0);
}
