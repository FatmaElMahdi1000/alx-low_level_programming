#include "main.h"

/**
 * print_times_table - creating a table
 * Description: table
 * @n: table size
 *
 * Return: a tablen
**/
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)
	{
		fprintf(stderr, "ERROR\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
		{
			k = j * i;

			if (j > 0)
			{
				printf(" ,");
			}

			if (k < 10)
			{
				printf("   %d", k);
			}
			else if (k >= 10 && k < 100)
			{
				printf("  %d", k);
			}
			else if (k >= 100)
			{
				printf(" %d", k);
			}
		}
			printf(" \n");
		}
	}
}
