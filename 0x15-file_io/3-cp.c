#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int source_fd;
	int dest_fd;

	if (!check_arguments(argc))
	{
		fprintf(stderr, "Usage: %s source_file dest_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	buffer = allocate_buffer();
	source_fd = open_source_file(argv[1]);
	dest_fd = open_dest_file(argv[2]);
	copy_file(source_fd, dest_fd, buffer);
	close_file(source_fd, argv[1]);
	close_file(dest_fd, argv[2]);
	free(buffer);
	exit(EXIT_SUCCESS);
}

/**
 * check_arguments - function
 * @argc: param
 * Return: 0
 */

int check_arguments(int argc)
{
	return (argc == 3);
}

/**
 * allocate_buffer - function
 * Return: buffer
 */

char *allocate_buffer()
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory for buffer\n");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * open_source_file - function
 * @source_file: param
 * Return: 0
 */

int open_source_file(char *source_file)
{
	int fd = open(source_file, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Unable to open source file %s\n", source_file);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

/**
 * open_dest_file - function
 * @dest_file: param
 * Return: fd
 */

int open_dest_file(char *dest_file)
{
	int fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Unable to open destination file %s\n", dest_file);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

/**
 * close_file - function
 * @fd: param
 * @file: param
 */

void close_file(int fd, char *file)
{
	int result = close(fd);

	if (result == -1)
	{
		fprintf(stderr, "Error: Unable to close file %s\n", file);
		exit(EXIT_FAILURE);
	}
}

/**
 * copy_file - function
 * @source_fd: param
 * @dest_fd: param
 * @buffer: param
 */

void copy_file(int source_fd, int dest_fd, char *buffer)
{
	int bytes_read = 0, bytes_written = 0;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			fprintf(stderr, "Error: Unable to write to destination file\n");
			exit(EXIT_FAILURE);
		}
	}
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Unable to read from source file\n");
		exit(EXIT_FAILURE);
	}
}

