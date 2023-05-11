#include "main.h"

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int source_fd;
	int dest_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s source_file dest_file\n", argv[0]);
		exit(97);
	}
	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		return (-1);
	}
	source_fd = open_source_file(argv[1]);
	dest_fd = open_dest_file(argv[2]);
	copy_file(source_fd, dest_fd, buffer, argv[1], argv[2]);
	close_file(source_fd);
	close_file(dest_fd);
	free(buffer);
	return (0);
}

/**
 * open_source_file - function to open source file
 * @source_file: the second argument in the command line
 * Return: fd
 */

int open_source_file(char *source_file)
{
	int fd;

	fd = open(source_file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest_file - function to open the destination file
 * @dest_file: the third argument in the command line
 * Return: fd
 */

int open_dest_file(char *dest_file)
{
	int fd;

	fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	return (fd);
}

/**
 * close_file - function to close the files
 * @fd: file description parameter
 */

void close_file(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - function to copy the files
 * @source_fd: source fd
 * @dest_fd: destination fd
 * @buffer: buffer to hold the value while coping
 * @source_file: source file (argv[1])
 * @dest_file: destination file (argv[2])
 */

void copy_file(int source_fd, int dest_fd,
		char *buffer, char *source_file, char *dest_file)
{
	int bytes_read, bytes_written;

	bytes_read = 0;
	bytes_written = 0;
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_read < BUFFER_SIZE)
			bytes_written = write(dest_fd, buffer, bytes_read);
		else
			bytes_written = write(dest_fd, buffer, BUFFER_SIZE);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
}
