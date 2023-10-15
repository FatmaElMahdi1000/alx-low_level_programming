#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n : the number of times the _ character should be printed
*/

void print_line(int n)
{
	int new;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (new = 1; new <= n; new++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
