#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
  * create_buffer - allocates 1024 bytes for buffer.
  * @file: file buffer is storing characters for.
  *
  *
  * Return: A poniter to a newly allocated buffer.
  */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)

	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buffer);

}

/**
  * close_file - closes file descriptors.
  * @fd: file to close.
  */

void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", fd);
		exit(99);
	}
}


/**
  * main - checks the code.
  * @argc: number of arguments.
  * @argv: an array of pointers to the arguments.
  * Description: if argument is not correct - exit code 97.
  *              if file_from does not exist or can't be read - exit code 98.
  *              if file_to can't be created or written to - exit code 99.
  *              if file_to or file_from can't be clode - exit code 100.
  * Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
