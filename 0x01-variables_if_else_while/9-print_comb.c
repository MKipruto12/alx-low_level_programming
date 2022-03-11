#include <stdio.h>

/**
 * *main- prints possible combos of single digit numbers
 * Return: 0 If successfullly executed.
 */

int main(void)
{
	int num;

	num = 0;
	for (; num < 10; num++)
		putchar((num % 10) + '0');
		if (num ==9 )
			continue;
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
