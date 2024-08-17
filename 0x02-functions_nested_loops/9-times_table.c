#include "main.h"
/**
 *times_table - a function that prints the 9 times table
 *
 * Description: 9 times table
 *
 * Return: void
*/
void times_table(void)
{
	int i, int j, int k, int n = 9;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			k = i * j;

			if (j > 0)
			{
				_putchar(',');
			}

			if (k < 10)

			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k > 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k == 10)

			{
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar(' ');
		_putchar('\n');
	}
}
