#include "main.h"

/**
 * swap_int- swaps values of two integers
 * @a: first int to be checked
 * @b: second int to be checked
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
