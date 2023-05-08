#include "main.h"

/**
 * read_textfile - file io function
 * @filename: name of the file, passed as parameter
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	int file_desc, letters_read, print_count;
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
		return (0);
	}
	letters_read = read(file_desc, buffer, letters);
	if (letters_read == -1)
	{
		return (0);
	}
	for (i = 0; i <= letters; i++)
	{
		write(STDOUT_FILENO, &buffer[i], 1);
		print_count++;
	}
	if (print_count == letters_read)
	{
		return (0);
	}
	close(file_desc);
	free(buffer);
	return (letters_read);
}
