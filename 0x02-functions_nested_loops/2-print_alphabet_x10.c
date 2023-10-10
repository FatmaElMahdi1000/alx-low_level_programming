#include"main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a function that prints 10 times the alphabet
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int line, j;

	for (line = 0; line <= 9; line ++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}
}
