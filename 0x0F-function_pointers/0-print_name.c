#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints a name.
 *
 * @name: name
 * @f: pointer functio
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
