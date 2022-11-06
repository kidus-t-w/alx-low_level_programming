#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point program
 * @argc: the number of command line arguments
 * @argv: the array that holds the command line arguments
 *
 * Return: On success, it returns 0. On error, it returns 1,
 * and errno is set appropriately..
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	char *s;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (isdigit(s[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
