#include "main.h"

/**
 * append_text_to_file - this program appends text at the end of a file.
 * @filename: pointer to name of file.
 * @text_content: string being added to end of the file.
 *
 * Return: when function fails or NULL - -1.
 *         when file does not exist or user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	wr = write(x, text_content, len);

	if (x == -1 || wr == -1)
		return (-1);

	close(x);

	return (1);
}
