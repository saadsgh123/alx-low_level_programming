#include "main.h"
/**
 * read_textfile - check the code
 * @filename: file's name
 * @letters: letter count.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_descriptor, i = 0;
	char buffer[letters];
	ssize_t bytes_read;

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0)
	{
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, sizeof(buffer));

	buffer[bytes_read] = '\0';

	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}

	close(file_descriptor);

	return (bytes_read);
}
