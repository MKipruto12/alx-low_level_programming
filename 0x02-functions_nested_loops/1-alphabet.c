#include "main.h"

/**
 *print_alphabet- code block prints alphabet in lowercase
 */

void print_alphabet(void)
{
	char abc_z;

	abc_z = 'a';
	for(; abc_z <= 'z';)
	{
		_putchar(abc_z++);
	}
	_putchar('\n');
	return (0);
}
