#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar (digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
