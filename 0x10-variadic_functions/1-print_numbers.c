#include "variadic_functions.h"

/**
 * print_numbers - print no.
 *@n: int
 *@separator: string
 *Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;

	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);

	while (i--)
		printf("%d%s", va_arg(list, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list);


}
