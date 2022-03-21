#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * *str: string to be checked
 * Return: no return
 */

void _puts(char *str)
{
	int count = 0;

	for (; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
