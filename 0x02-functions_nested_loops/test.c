#include<stdio.h>
int main(void)
{
	int row, mult, prod, remainder;

	for (row = 0; row <= 9; row++)
	{
		printf("0");
		for (mult = 1; mult <= 9; mult++)
		{
			printf(",");
			printf(" ");
			prod = row*mult;
			remainder = prod % 10;
			
			if (prod <= 9)
				printf(" ");
			else
				printf("%d", prod / 10);
			printf("%d", remainder);
		}
		printf("\n");
	}
}
