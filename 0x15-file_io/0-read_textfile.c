#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read textfile to print to STDOUT
 * @filename: text file beinig read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *         - when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
