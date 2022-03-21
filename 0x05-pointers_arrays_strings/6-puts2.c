#include "main.h"

/**
 * puts2- prints every char of a str, starting with first char
 * @str: string to be checked
 */

void puts2(char *str)
{
	int count;

	count = 0;
	for (; str[count] != '\0'; )
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
}
