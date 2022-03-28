#include "main.h"

/**
 * _memcpy- copies bytes from memory area src to dest
 * @dest: destination
 * @src: source
 * @n: bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
