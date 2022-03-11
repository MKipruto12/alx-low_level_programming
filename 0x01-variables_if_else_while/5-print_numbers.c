#include <stdio.h>

/**
 * main- outputs single digit numbers of base 10 starting from 0
 * code block enclosed in main
 * Return: 0 if executed successfully
 */

int main(void)
{
	int num;

	num = 0;	
	for (; num < 10;)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
