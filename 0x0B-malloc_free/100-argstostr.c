#include "main.h"

/**
 *argstostr - Concatenation function
 *
 *@ac: number of args.
 *@av: the arguments
 *
 * Description: Concatenation
 *
** Return: concetanated string
*/

char *argstostr(int ac, char **av)
{
	int i;
	char *s;
	size_t buffer_size = 0;

	if (ac == 0 || av == NULL)
	{
		fprintf(stderr, "NO ARGUMENTS");
	}

	for (i = 0; i < ac; i++)
	{
		buffer_size = buffer_size + strlen(av[i]) + 1;
	}
	s = malloc(buffer_size + 1);  /**for the final NULL*/

	if (s == NULL)
	{
		fprintf(stderr, "NO ARGUMENTS");
		return (NULL);
	}

	s[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		if (i < ac - 1)
		{
			strcat(s, " ");
		}
	}

	return (s);

	free(s);
}
