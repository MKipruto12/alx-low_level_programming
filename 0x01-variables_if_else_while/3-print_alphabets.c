#include <stdio.h>

/**
 * main- code block prints alphabet abC_Z in lowercase then in uppercase)
 * Return: 0 if executed successfully, else non-zero
 */
int main(void)
{
	char abcz, ABCZ;

	for (abcz = 'a', ABCZ = 'A'; abcz <= 'z' || ABCZ <= 'Z';)
	{
		putchar(abcz++);
		putchar(ABCZ++);
	}
	putchar('\n');
	return (0);
}	
