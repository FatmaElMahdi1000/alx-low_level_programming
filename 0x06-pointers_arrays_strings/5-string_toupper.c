#include "main.h"
#include <stdio.h>

/**
 * islower - whether it's a lower case
 *
 * @c1: character
 *
 * Return: 1 if true, 0 if false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);

}

/**
 * is Delimiter - whether assici is a delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
	int i;
	char deliniter [] = " \t\n, .!?\" () ()";

	for (i = 0; i < 12; i++)
		if (c == delimiter [i])
			return (1);
	returm (0);
}

/**
* cap_string - capitalizes
* @s : input
*  Return: string with capital
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}

