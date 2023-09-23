#include "main.h"

/**
 * customPrint- this program read text file print to STDOUT.
 *
 *@message: pnjn oon
 * Return: 0
 */

void customPrint(const char *message);
void writeToStdout(const char *text);
size_t stringLength(const char *str);
void writeDataToFileDescriptor(int fd, const char *data, size_t length);

void customPrint(const char *message)
{
	writeToStdout(message);
}

/**
* writeToStdout- on oln'ompm
* @text: onlnls kknj knld
*/
void writeToStdout(const char *text)
{
	writeToFileDescriptor(STDOUT_FILENO, text);
}

/**
* writeToFileDescriptor- on oln'o mpm
* @fd: lklkml mdv hbkd jd
* @data: jnll klnmflk
*/
void writeToFileDescriptor(int fd, const char *data)
{
	size_t length = stringLength(data);

	writeDataToFileDescriptor(fd, data, length);
}

/**
* stringLength- on oln'ompm gub l kjbkjblkn
* @str: lpm lkn llkn mklm
* Return: length
*/
size_t stringLength(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* writeDataToFileDescriptor- on oln'ompmkbjkjbkjnlk
* @fd: nl;knkln kjlm ll
* @data: lnln ln lk lkhhg
* @length: kjjkjd nkjllks jn
*/

void writeDataToFileDescriptor(int fd, const char *data, size_t length)
{
	write(fd, data, length);
}
