#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: a program to print in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 0;
	int j, F; 

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			F = 0;

			while (F <= 0)
			{
				if (i != j && j != F && i < j && j < F)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(F + 48);

					if (i + j + F != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				F++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
