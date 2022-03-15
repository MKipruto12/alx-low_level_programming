#include "main.h"

/**
 * main-code block prints alphabet in lowercase
 * Return: 0 if successful else non-zero
 */

int main(void)
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
