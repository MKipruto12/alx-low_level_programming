#include <stdio.h>

/**
 * main- code block prints alphabet abC_Z in lowercase then in uppercase)
 * Return: 0 if executed successfully, else non-zero
 */
int main(void)
{
	char abc_z, ABC_Z;

	for (abc_z = 'a'; abc_z <= 'z';)
	{
		putchar(abc_z++);
	}
	for (ABC_Z = 'A'; ABC_Z <= 'Z';)
	{
		putchar(ABC_Z++);
	}
	putchar('\n');
	return (0);
}
