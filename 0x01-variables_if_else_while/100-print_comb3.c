#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different comb.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(j + '0');
				putchar(i + '0');

				if (i + j != 17)
				{
					putchar (',');
					putchar (' ');
				}
			}
			i++;
		}
		j++;
	}
	putchar('\n');

	return (0);
}
