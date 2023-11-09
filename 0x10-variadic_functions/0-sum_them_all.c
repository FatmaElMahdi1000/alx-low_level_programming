#include "variadic_functions.h"

/**
 * sum_them_all - sums variable argument
 * @n: int.
 * @...: int list
 *
 * Return : the intger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	va_list arg;

	if (!n)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(arg, int);

		sum += x;
		printf("%d\n", sum);
	}
	va_end(arg);
	return (sum);

}
