#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: positive or 0 num. only
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

			if (a == 0)
			{
				exit(98);
			}
			return (a);

}
