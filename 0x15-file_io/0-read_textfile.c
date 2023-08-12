#include "main.h"


/**
 * read_textfile - reads a textfile
 * @letter: is the number of letters it should read and print.
 * Return: returns the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fp;
    char *buffer = NULL;
    size_t n = 0;

    (void) letters;

    if (!filename) {
        return (0);
    }

    fp = fopen(filename, "r");
    if (!fp) {
        return (0);
    }

    while (getline(&buffer, &n, fp) != -1) {
        printf("%s", buffer);
    }
    free(buffer);
    fclose(fp);
    return (0);
}