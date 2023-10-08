#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:A C program to print last digit
 *
 *Return:Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigitofn = n % 10;

	if (lastdigitofn > 5)
	{
		printf("%i the string and is greater than 5\n", lastdigitofn);
	}
	else if (lastdigitofn == 0)
	{
		printf("%i the string and is 0\n", lastdigitofn);
	}   
	else
	{
	        printf("%i the string and is less than 6 and not 0\n", lastdigitofn);
	} 
	return (0);
}
