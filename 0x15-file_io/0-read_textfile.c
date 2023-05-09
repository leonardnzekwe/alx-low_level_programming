#include "main.h"

/**
 * read_textfile - file io function
 * @filename: name of the file, passed as parameter
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read, letters_written;
	int file_desc;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	letters_read = read(file_desc, buffer, letters);
	if (letters_read == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1 || letters_read != letters_written)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	close(file_desc);
	free(buffer);
	return (letters_read);
}
