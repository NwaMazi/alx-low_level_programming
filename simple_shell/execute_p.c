#include "main.h"

/**
 * my_exec- jsjno;noc knml kl
 *
 * @command: kn k dkn jkj
 * Return: 0
 */

void my_exec(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
		else if (child_pid == 0)
		{
			execlp(command, command, (char *)NULL);
			perror("execlp");
			exit(EXIT_FAILURE);
		}
			else
			{
				wait(NULL);
			}
}
