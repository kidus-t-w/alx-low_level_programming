#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: the number of command line arguments
 * @argv: the array that holds the command line arguments
 *
 * Return: On success, it returns 0. On error, it returns
 * 1, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
