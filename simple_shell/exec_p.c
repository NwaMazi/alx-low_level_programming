#include "main.h"


/**
 * my_exec - Execute a shell command
 *
 * @command: The command to execute
 * Return: 0 on success, -1 on failure
 */

int my_exec(char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		return (-1); /* Return -1 to indicate failure */
	}
	else if (child_pid == 0)
	{
/* Child process*/
		char *args[] = {command, NULL};

		if (execve(command, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
/* Parent process*/
		int status;

		if (wait(&status) == -1)
		{
			perror("wait");
			return (-1); /* Return -1 to indicate failure*/
		}

		if (WIFEXITED(status))
		{
			int exit_status = WEXITSTATUS(status);

			return (exit_status); /* Return the exit status of the child process*/
		}
		return (-1); /* Return -1 to indicate failure*/
	}
}
