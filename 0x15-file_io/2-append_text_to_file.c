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
	ssize_t  n_out;

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor < 0)
	{
		return (-1);
	}
	while (text_content[i])
		i++;
	if (text_content != NULL)
	{
		n_out = write(file_descriptor, text_content, i);
		if (n_out == -1)
		{
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
