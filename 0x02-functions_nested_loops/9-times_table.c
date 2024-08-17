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
	int i;
	int j;
	int k;
	int n = 9;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			k = i * j;

			if (j > 0)
			{
				printf(",");
			}

			if (k < 10)

			{
				printf("  %d", k);
			}

			else if (k > 10)

			{
				printf(" %d", k);
			}

			else if (k == 10)

			{
				printf(" %d", k);
			}
		}
		printf(" \n");
	}
}
