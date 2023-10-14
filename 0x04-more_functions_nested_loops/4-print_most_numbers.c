#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Description: prints the numbers, exclude 2 and 4
 *
 * Return: Alway 0 (success)
*/
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			continue;
			_putchar(i + 48);
		}
		i++;
	}
	_putchar('\n');
}

