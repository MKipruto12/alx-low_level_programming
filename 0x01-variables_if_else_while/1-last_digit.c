#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- starting point
 * code block- if , else if lines on last digit random output
 * Return: 0 if executed succesfully
 */
int main(void)
{
	int n, lstdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstdigit = (n % 10);
	if (lstdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdigit);
	else if (lstdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstdigit);
	else if ((lstdigit < 6) && (lstdigit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdigit);
	return (0);
}
