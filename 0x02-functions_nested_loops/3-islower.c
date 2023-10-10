#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character
 *
 * Return: 1 if c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
