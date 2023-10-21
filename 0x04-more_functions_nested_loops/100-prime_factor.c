#include "main.h"

/**
 * _sqrt - find largset number
 *
 * @x: input
 *
 * Return: square root of x
*/
double_ sqrt(double x)
{
	float sqrt, tmp;

	sqr = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
* largest_prime_factor - finds and prints number
*
* @num: num to find
*/

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);

}
/**
 * main - prints the largest prime factor
 *
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	largest_prime_factor(612852475142);
	return (0);
}
