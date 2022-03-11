#include <stdio.h>

/**
 * main- prints lower case alphabet in reverse
 * Return: 0 if executed successfully
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
		putchar(alphabet--);
	putchar('\n');
	return (0);
}
