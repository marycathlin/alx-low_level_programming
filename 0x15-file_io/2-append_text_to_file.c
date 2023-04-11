#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: is the file name.
  * @text_content: added content.
  *
  * Return: 1 if the file exists. -1 if the file does not exist or fails.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int len;
	int wrw;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		wrw = write(o, text_content, len);
		if (wrw == -1)
			return (-1);
	}

	close(o);

	return (1);
}
