#include "main.h"

int main (int argc, char **argv)
{
	int index = 0;

	printf("argc is %d\n", argc);
	while (index < argc)
		{
		printf("Argv[%d] = %s\n", index, argv[index]);
		index++;
	}

	return (0);
}
