#include "main.h"

/**
 * append_text_to _file - Append atext at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: the string to add to the end of the file
 *
 * Return: -1 if the function fails or filename is NULL
 *         if file does not exist the user lacks write permision -1
 *         otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
