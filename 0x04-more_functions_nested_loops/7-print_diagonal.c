#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int space, mychar;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 1; space <= n; space++)
		{
			for (mychar = 1; mychar <= space; mychar++)
			{
				_putchar(' ');
			}
			_putchar('92'); /*is equal to '/' char*/
		}
		_putchar('\n');
	}

}
