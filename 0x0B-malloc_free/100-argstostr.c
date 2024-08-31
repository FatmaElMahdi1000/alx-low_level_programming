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
	int j;
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

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the `argstostr`
 * function by concatenating an array of strings and printing the result.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *args[] = {"I", "will", "show you", "how", "great", "I", "am"};
	char *result = argstostr(7, args);

	if (result != NULL)
	{
		printf("%s\n", result);

		free(result);
	}
}
