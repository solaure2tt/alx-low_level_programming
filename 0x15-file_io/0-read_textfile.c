#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * read_textfile - read  file
 * Description: function that reads a text file and prints it to the POSIX STou
 * @filename: name of the filename
 * @letters: number of letters to read
 * Return: number f letters reads
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t resr, resw;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	resr = read(fd, buf, letters);
	if (resr < 0)
		return (0);
	resw = write(STDOUT_FILENO, buf, resr);
	if (resw < resr)
		return (0);
	close(fd);
	return (resw);

}
