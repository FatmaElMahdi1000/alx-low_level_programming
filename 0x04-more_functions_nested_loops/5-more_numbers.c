#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @i - for lines
 * @j - for numbers 
 * @F - count
 *
 * Return: Always 0 (success)
*/
void more_numbers(void)
{
	int i = 0, j, F;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			F = j;
			if (F > 9)
			{
				_putchar(j + 48);
				i = F % 10;
				j++;
			}
			_putchar(j + 48);
			i++;
		}
		_putchar('\n');

}
