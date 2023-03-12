#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - mul nums
 *
 * @argc: numargs
 * @argv: args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int res __attribute__ ((unused));

	argc += -1;
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}


	return (0);
}
