#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * *str: string to be checked
 */

void _puts(char *str)
{
	int count = 0;

	for (count >= 0; str[count] != '\0'; )
		_putchar(str[count]);
		count++;
	_putchar('\n');
}
