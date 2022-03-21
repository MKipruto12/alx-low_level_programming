#include "main.h"

/**
 * rev_string- reverses string
 * @s: string to be checked
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	count = 0;
	for (; s[count] != '\0';)
		count++;
	str = s;

	i = 0;
	for (; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}

