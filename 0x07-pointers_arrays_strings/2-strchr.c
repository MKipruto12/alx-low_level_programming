#include "main.h"

/**
 * _strchr- locates char in str
 * @s: string
 * @c: character
 * Return: pointer to first char c occurence in str, NULL if char not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	for (; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
