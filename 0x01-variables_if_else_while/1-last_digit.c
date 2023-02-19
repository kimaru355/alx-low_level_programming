#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints last digit of random number
 *
 * Return: Always 0;
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is 0\n", n, r);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, r);
	return (0);
}
