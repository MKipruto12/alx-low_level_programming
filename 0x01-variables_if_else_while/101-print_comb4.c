#include <stdio.h>

/**
 * main- prints possible combos of three digits
 * Return: 0 if executed successfully
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 49;
	c = 50;
	for (; a < 58; a++)
	{
		for (; b < 58; b++)
		{
			for (; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 && b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
