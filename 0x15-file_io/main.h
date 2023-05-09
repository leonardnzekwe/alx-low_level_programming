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
int check_arguments(int argc);
char *allocate_buffer(void);
int open_source_file(char *source_file);
int open_dest_file(char *dest_file);
void close_file(int fd, char *file);
void copy_file(int source_fd, int dest_fd, char *buffer);

#endif /* MAIN_H */
