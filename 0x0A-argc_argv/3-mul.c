#include<stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: num.
 * @argv: list
 * Return: (0) success, non-zero fail
*/
int main(int argc, char *argv[])
{
	int result;
	int i;
	int j;

	if (argc == 3)
	{
		result = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
