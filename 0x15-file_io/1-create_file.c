#include "main.h"

/**
  * create_file - creates a file.
  * @filename: filename.
  * @text_content: content of the file.
  *
  * Return: 1 if success otherwise - -1.
  */
int create_file(const char *filename, char *text_content)
{
	int o;
	int len;
	int wrw;


	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	wrw = write(o, text_content, len);

	if (wrw == -1)
		return (-1);

	close(o);

	return (1);
}
