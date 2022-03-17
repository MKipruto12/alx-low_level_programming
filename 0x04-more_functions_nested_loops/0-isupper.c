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
		return (1);
	}
	for (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
