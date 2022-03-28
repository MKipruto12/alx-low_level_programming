#include "main.h"

/**
 * _strspn- getslenght of prefix substring
 * @s: string
 * @accept: src of bytes
 * Return: num of bytes in initiasl segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	return (i);
}
