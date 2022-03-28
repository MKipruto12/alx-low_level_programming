#include "main.h"

/**
 * _memset-func fills first n bytes of the memory area pointed to by s with the constant byte b
 * @b: constant byte
 * @s: memory area
 * @n: bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	i = 0;
	for (;i <= n;)
		s[i] = b;
		i++;
	return (s);
}
