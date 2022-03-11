#include <stdio.h>
/**
 * main-starting point, code block outputs alphabet (abc_z) in lowercase
 * Return: 0 if executed successfully
 */
int main(void)
{
	char abc_z;

	abc_z = 'a';
	for (; abc_z <= 'z';)
	{
		putchar(abc_z++);
	}
	putchar('\n');
	return (0);
}
