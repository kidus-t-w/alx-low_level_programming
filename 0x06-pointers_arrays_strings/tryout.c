#include <stdio.h>


/**
 * _strcat- concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to string
 * Return: returns a pointer to the resulting string dest
**/

int main(void)
{
	char *dest;
    char *src;
    int len1, len2, n = 0;

    dest = "Kidus";
    src = "Tilahun";
	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
		;
	}
	len2 = 0;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
    for (n = 0; n < len1; n++)
    {
        printf("%s", dest);
    }
	return (0);
}
