#include "main.h"
#include <stdio.h>

/**
 * main - args again
 *
 * @argc: numargs
 * @argv: argvs
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	argc += -1;
	i = 0;

	while (i <= argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}


	return (0);
}
