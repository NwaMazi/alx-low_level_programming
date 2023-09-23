#include "main.h"

int main(void)
{
	char message[128] = "my name is none of your business";
	char *get = NULL;

	get = strtok(message, " ");
	while(get)
	{
	//get = strtok(message, "o");
	printf("%s\n", get);
	get = strtok(NULL, "i");
	//printf("%s\n", get);
	//get = strtok(NULL, " ");
	}
	
	return (0);

}
