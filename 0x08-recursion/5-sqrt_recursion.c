#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion -  returns the natural square root
 * @val: no.
 * @n: number
 *
 * Return: 0 sqr, -1 if no sqr
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));

}
/**
 * *square - find root
 * @n: int
 * @val: square
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
