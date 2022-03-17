#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase
 * Return: 0 if lowercase
 */

int _isupper(int c)
{
	char c;

	c = 'A';
	for (c >= 'A' && c <= 'Z')
	{
		_putchar(A: 1);
	}
	for (c >= 'a' && c <= 'z')
	{
		_putchar(a: 0);
	}
	return (0);
}
