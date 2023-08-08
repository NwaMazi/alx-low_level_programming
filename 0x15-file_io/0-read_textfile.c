#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this program read text file print to STDOUT.
 * @filename: the file being read
 * @letters: number of letters being read
 * Return: w- number of bytes read and printed
 *        0 when function fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t tx;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tx = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, tx);

	free(buf);
	close(fd);
	return (wr);
}
