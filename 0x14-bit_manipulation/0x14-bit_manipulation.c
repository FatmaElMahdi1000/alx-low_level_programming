#include"main.h"

/**
 * get_endianness - returns the endianness
 *
 * Return: 0 if big, 1 if small
*/

int get_endianness(void)
{
	unsigned long int number;

	if (number != 1)
	{
		printf("NOT A NUMBER");
		return (-1);
	}
	if (number == 1)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);

}
