#include <stdio.h>

/**
 * main - prints the sizes of various types
 *
 * Return: Always 0.
*/

int main(void)
{
	char c;
	int i;

	printf("Size of a char : %lu byte(s)\n", sizeof(c));
	printf("Size of an int : %lu byte(s)\n", sizeof(i));
	printf("Size of a long int : %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(long long));
}
