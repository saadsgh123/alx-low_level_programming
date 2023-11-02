#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, i = 0;
	int n_out;

	if (!filename || !text_content)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);
	if (file_descriptor < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i])
			i++;

		n_out = write(file_descriptor, text_content, i);
		if (n_out == -1)
		{
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
