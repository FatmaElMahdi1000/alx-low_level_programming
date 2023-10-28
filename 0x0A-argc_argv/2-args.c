#include<stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);

}
