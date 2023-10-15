#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: size
*/
void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(" ");
			}
			for (column = 0; column <= row; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
