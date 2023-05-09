#include "main.h"

/**
 * create_file - file io function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, byte_written, str_len;

	str_len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[str_len] != '\0')
		{
			str_len++;
		}
	}
	byte_written = write(file_desc, text_content, str_len);
	if (byte_written == -1)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);
}
