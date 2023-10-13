#include"main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * Description: prints the numbers, from 0 to 9
 *
 * Return: Alway 0
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
}
