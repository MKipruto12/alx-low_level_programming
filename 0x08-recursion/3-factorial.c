#include "main.h"

/**
 * factorial- returns factorial of given num
 * @n: integer to be checked
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
