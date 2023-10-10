#include "main.h"
/**
 * main - Entry point
 *
 * Description: A program to print putchar
 *
 * Return: Alway 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";
	int ch = 0; 

	while (ch < 8)
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');

return (0);
}

