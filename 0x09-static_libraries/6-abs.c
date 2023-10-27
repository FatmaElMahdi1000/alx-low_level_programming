#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: takes an unger type
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
