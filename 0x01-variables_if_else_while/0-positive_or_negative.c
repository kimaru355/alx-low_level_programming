#include <stdlib.h>
#include <time.h>
/**
 * main - print wthether number is positive or negative
 *
 *Return: Always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 0)
		printf("positive");
	else
		printf("negative");
	return (0);
}
