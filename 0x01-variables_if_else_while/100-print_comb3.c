#include <stdio.h>

/**
 * main- prints possible different combinations of two digits
 * Return: 0 if executed successfully
 */

int main(void)
{
	int n, m;

	n = 48;
	m = 49;
	for (; n <= 56; n++)
	{
		for (; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	
	}
	putchar('\n');
	return (0);
}
