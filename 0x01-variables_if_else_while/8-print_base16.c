#include <stdio.h>

/**
 * main- prints nums between 0, 9 and letters a to f
 * Return: 0 if executed successfully
 */

int main(void)
{
	int b;
	char b_16;

	b = 48;
	b_16 = 'a';
	for (; b < 58; )
		putchar(b++);
	for (; b_16 <= 'f'; )
		putchar(b_16++);
	putchar('\n');
	return (0);
}
