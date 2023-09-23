#include "main.h"

/**
 * usr_in- this program read text file print to STDOUT.
 * @command: ononlkmlkmkl
 * @size: kmlk nlkn kln lkjn'l
 * Return: 0
 */

void usr_in(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			customPrint("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			customPrint("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
