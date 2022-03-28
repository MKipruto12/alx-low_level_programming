#include "main.h"

/**
 * _memset-func fills first n bytes of memory area pointed by s with byte b
 * @b: constant byte
 * @s: memory area
 * @n: bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	i = 0;
	for (; i < n; i++)
		
		s[i] = b;
	return (s);
}
