#include "main.h"
/**
 * swap_int - swap 2 numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: always 0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
