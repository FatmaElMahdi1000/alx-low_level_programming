#include"main.h"
#include <stdlib.h>

/**
 *read_textfile - function
 *@letters: size
 *@filename: string
 *Return: cannot open or NULL: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;

	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	o = open("filename.txt", O_RDONLY);

	r = read(o, buffer, sizeof(buffer));

	w = write(STDOUT_FILENO, buffer, sizeof(buffer) - 1);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
