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
	int i, int j, int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				printf(" %d", k)
			}
			printf(" \n");
		}
	}
