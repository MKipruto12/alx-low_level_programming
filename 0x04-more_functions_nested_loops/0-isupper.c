#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, Return: 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);	
	else	
		return (0);
}
