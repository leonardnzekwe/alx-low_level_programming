#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Task 3 */
#define BUFFER_SIZE 1024
int open_source_file(char *source_file);
int open_dest_file(char *dest_file);
void close_file(int fd);
void copy_file(int source_fd, int dest_fd,
char *buffer, char *source_file, char *dest_file);

#endif /* MAIN_H */
