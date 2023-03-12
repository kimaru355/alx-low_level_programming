#include "main.h"
#include <stdio.h>

/**
 * main - prints argument passed to main
 *
 * @argc: number of arguments
 * @argv: arguments passed there
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
