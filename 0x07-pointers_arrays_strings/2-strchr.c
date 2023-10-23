#include "main.h"

/**
 * *_strchr - constant
 * @s: poniter
 * @c: constant
 * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
