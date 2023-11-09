#include "variadic_functions.h"

/**
 * sum_them_all - sums variable argument
 * @n: int
 * @...: int list
 *
 * Return : the intger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;

	va_list arg;

	if (!n)
		return (0);

	va_start(arg, n);

	while (i--)
	{
		int x = va_arg(arg, int);

		sum += x;
	}
	va_end(arg);
	return (sum);

}
