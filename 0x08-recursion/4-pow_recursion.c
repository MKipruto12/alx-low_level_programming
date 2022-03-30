#include "main.h"

/**
 * _pow_recursion- returns value of x raised to y
 * @x: integer one (num)
 * @y: integer tw0 (power)
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
