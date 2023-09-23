#include "main.h"

int main(void)
{
	char *_getline[] = {"/bin/ls", "-l", NULL};
	int execVRV = 10;
	pid_t forkRV;
	int waitstatus;

		printf("before calling execve\n");

		//for (int i = 0; i < 5; i++)
		//{
		forkRV = fork();
		//execVRV = execve(_getline[0], _getline, NULL);

		if (forkRV == -1)
		{
			perror("error creating a child");
			return (-1);
		}
		if (forkRV == 0)
		{
			execVRV = execve(_getline[0], _getline, NULL);
			if (execVRV == -1)
			{
				perror("Error");
				//exit(EXIT_FAILURE);
			}
		}

		else
		{
			wait(&waitstatus);

			printf("Execve has been called\n");
		}
		//}
	return (0);
}
