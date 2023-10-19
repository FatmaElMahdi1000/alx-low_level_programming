#include "main.h"
/**
 * reverse_array - a function that reverses an array of ints
 *
 * @n: is the number of elements of the array
 * @a: dss
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

}
