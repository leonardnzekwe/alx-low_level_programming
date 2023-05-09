#include "main.h"

/**
 * append_text_to_file - file io function
 * That appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, byte_written, str_len;

	str_len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
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
		return (-1);
	}
	close(file_desc);
	return (1);
}
