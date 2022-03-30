#include "main.h"

/**
 * _sqrt_recursion- prints natura square root
 * @n: number to be checked
 * Return: -1 if n has no square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n,0));
}
