#include"main.h"

/**
 * get_endianness - returns the endianness
 *
 * Return: 0 if big, 1 if small
*/

int get_endianness(void)
{
	unsigned long int number = 1;

	return (*(char *)&number);

}
