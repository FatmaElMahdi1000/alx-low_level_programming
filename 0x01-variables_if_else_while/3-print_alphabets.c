#include <stdio.h>

/**
 * main -Entry point
 *
 *Description: a program to print in lowercase, and then in uppercase
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

        return (0);
}	
