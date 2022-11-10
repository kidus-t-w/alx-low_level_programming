#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to be contatenated 
 * @s2: string to be contatenated with s1
 *
 * Return: Always 
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int x, y, len;

	for (x = 0; s1[x] != '\0'; x++);
	for (y = 0; s2[y] != '\0'; y++);

	len = x + y + 1;
	printf("the length of len is : %d\n", len);
	new = (char *)malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	printf("size of new is %ld\n", sizeof(new));	
	for (x = 0; s1[x] != '\0'; x++)
		new[x] = s1[x];
	x++;
	for (y = 0; x < len && s2[y] != '\0'; y++)
	{
		printf("inside for loop and x = %d\n", x);
		new[x] = s2[y];
		x++;
	}
	new[len - 1] = '\0';
	return (new);
}
