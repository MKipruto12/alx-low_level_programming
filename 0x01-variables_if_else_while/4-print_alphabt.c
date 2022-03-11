#include <stdio.h>

/**
 * main- code block outputs alphabets in lowercase excluding q and e
 * Return: 0 if executed else non zero
 */
int main(void)
{
	char abc;
	abc = 'a';
	for  (; abc <= 'z'; abc++)
	{
		if (abc != 'e' || abc != 'q')
		{
			putchar(abc++);
		}
	}
	putchar('\n');
	return 0;
}
