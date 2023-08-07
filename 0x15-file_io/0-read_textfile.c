#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a textfile and prints it to stdandard output
 * @filename: the name of the file read
 * @letters: the number of letters read
 * Return: returns 0 on fail or the number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, fd;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	x = read(fd, buff, letters);
	y = write(STDOUT_FILENO, buff, x);
	free(buff);
	close(fd);
	return (y);
}
