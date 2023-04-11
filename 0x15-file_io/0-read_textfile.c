#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - Reads a a text file and prints it to POSIX stdout.
  * @filename: A pointer to the name of the file.
  * @letters: The number of letters the function should read and print.
  *
  * Return: 0 if filename is NULL or if file fails.
  *          O/W - the actual number of bytes the funtion can read and print.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
