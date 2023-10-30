#include "main.h"
/**
 * read_textfile - check the code
 * @filename: file's name
 * @letters: letter count.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_descriptor = open(filename, O_RDONLY);
	int i = 0;
	char buffer[letters];

	if (file_descriptor < 0)
	{
		perror("Error opening file");
		return (-1);
	}

	ssize_t bytes_read = read(file_descriptor, buffer, sizeof(buffer));

	if (bytes_read < 0)
	{
		perror("Error reading file");
		close(file_descriptor);
		return (-1);
	}

	buffer[bytes_read] = '\0';

	while (buffer[i] != '\0')
	{
		putchar(buffer[i]);
		i++;
	}

	close(file_descriptor);

	return (bytes_read);
}
