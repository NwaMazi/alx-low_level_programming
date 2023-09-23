#include "main.h"

int main(void)
{
        char *_getline[] = {"/bin/ls", "-l", NULL};
	char *lineptr;
	ssize_t n = 0;
	ssize_t getRV;
        int execVRV = 10;
	char *store = NULL;
        ssize_t size = 0;	
	
	getline(&store, &size, stdin);
	printf("before calling execve\n");

	if (store == _getline[0])
	{
	//for (int i = 0; i < 5; i++)
	//{
	//forkRV = fork();
	execVRV = execve(_getline[0], _getline, NULL);

	if (execVRV == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	printf("execve was called \n");
	}
return (0);
}
