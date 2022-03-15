#include "main.h"

/**
 * print_alphabet_x10- code block prints 10 times the alphabet in lowecase
 */

void print_alphabet_x10(void)
{
	char abc_z;
	int i = 0;

	for (; i < 10;)
	{
		abc_z = 'a';
		for (; abc_z <= 'z';)
		{
			_putchar(abc_z++);
		}
		_putchar('\n');
		i++;
	}
}
