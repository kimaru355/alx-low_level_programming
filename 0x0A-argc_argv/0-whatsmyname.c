#include "main.h"
#include <stdio.h>

/**
 * main - takes arguements and returns them
 *
 * @argc: count arguments to main
 * @argv: argument to main
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
