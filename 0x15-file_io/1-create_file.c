#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, i = 0;
	ssize_t n_out;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor < 0)
		return (-1);

	if (!text_content)
		text_content = "";


	while (text_content[i])
	{
		i++;
	}
	n_out = write(file_descriptor, text_content, i);

	if (n_out < 0)
		return (-1);

	close(file_descriptor);

	return (1);
}
