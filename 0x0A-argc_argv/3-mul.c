#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: num.
 * @argv: list
 * Return: (0)-success, non-zero fail
*/
int main(int argc, char *argv[])
{
	int result;
	
	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
