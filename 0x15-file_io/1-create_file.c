#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>

/**
 * create_file - read  file
 * Description: function that create a file
 * @filename: name of the filename
 * @text_content: text to append
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t __attribute__((unused)) resw;
	int fd;
	mode_t mode;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY);
	if (fd < 0)
	{
		mode = S_IRUSR | S_IWUSR;
		fd = open(filename, O_WRONLY | O_CREAT, mode);
	}
	else
	{
		close(fd);
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		resw = write(fd, text_content, strlen(text_content));
		if (resw < (ssize_t)strlen(text_content))
			return (-1);
	}
	close(fd);
	return (1);

}
