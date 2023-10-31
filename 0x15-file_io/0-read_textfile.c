#include "main.h"
/**
 * read_textfile - check the code
 * @filename: file's name
 * @letters: letter count.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_descriptor;
	char *buffer;
	ssize_t bytes_read, nwr;

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0)
	{
		return (0);
	}
    
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	bytes_read = read(file_descriptor, buffer, sizeof(buffer));

	nwr = write(STDOUT_FILENO, buffer, bytes_read);


	close(file_descriptor);
    free(buffer);

	return (nwr);
}
