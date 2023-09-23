#include "main.h"

/**
 * customPrint- jnsdnv jnjnkj jhb jhb
 * @talk: jnkjc jjn oeh idx
 * Return: 0
 */

void customPrint(const char *talk)
{
	write(STDOUT_FILENO, talk, strlen(talk));
}
