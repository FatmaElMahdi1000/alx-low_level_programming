#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * description: a program to print in lower case
 *
 * Return: void
*/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
