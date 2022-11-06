#include <stdio.h>

/**
 * main - entry point of program
 * @argc: the number of command line arguments
 * @argv: the array that holds the command lines argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
