#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcents
 *
 * @argc: numargs
 * @argv: args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cents[] = {1, 2, 5, 10, 25};
	int i, bal, rem, sum, ans;

	argc += -1;
	sum = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	ans = atoi(argv[1]);

	if (ans < 0)
		printf("0\n");
	else
	{
		for (i = 4; i >= 0; i--)
		{
			rem = ans / cents[i];
			bal = ans % cents[i];
			sum = sum + rem;
			ans = bal;
		}

		printf("%d\n", sum);
	}

	return (0);
}
