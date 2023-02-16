#include <stdio.h>

/**
 * main - prints the sizes of various types
 *
 * Return: Always 0.
*/

int main(void)
{
	printf("Size of a char : %lu byte(s)\n", sizeof(char));
	printf("Size of an int : %lu byte(s)\n", sizeof(int));
	printf("Size of a long int : %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(long long));
}
