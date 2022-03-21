#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * *str: string to be checked
 */

void _puts(char *str)
{
	int count = 0;

	str = *(str + count);
	for (; str != '\0'; )
		_putchar(str);
		count++;
	_putchar('\n');
}
