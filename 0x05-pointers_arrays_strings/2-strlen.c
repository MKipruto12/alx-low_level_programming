#include "main.h"

/**
 * _strlen- returns lenght of string
 * @s: string to be checked
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	for (; *(s + count) != '\0'; )
		count++;

	return (count);
}
