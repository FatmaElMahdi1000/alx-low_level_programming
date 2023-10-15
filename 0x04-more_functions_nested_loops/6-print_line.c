#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n : the number of time the character should be printed
 *
 * Return: Always 0 (success)
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
