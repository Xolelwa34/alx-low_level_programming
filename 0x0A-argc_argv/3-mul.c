#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
	{

	 int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", total);

	return (0);

	}
