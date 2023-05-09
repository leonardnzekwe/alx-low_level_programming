#include "main.h"

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, read_status, write_status;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	read_status = read(from_file, buffer, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || read_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_status = write(to_file, buffer, read_status);
		if (to_file == -1 || write_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_status = read(from_file, buffer, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_status > 0);

	free(buffer);
	close_file(from_file);
	close_file(to_file);

	return (0);
}

/**
 * create_buffer - Allocates memory for a buffer.
 * @file_name: The name of the file to be copied.
 * Return: A pointer to the buffer.
 */
char *create_buffer(char *file_name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't allocate memory for buffer in %s\n", file_name);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int status;

	status = close(fd);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

