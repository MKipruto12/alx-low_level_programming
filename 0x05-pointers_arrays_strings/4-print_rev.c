#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s: string to be checked
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	for (; s[i] != '\0';)
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
