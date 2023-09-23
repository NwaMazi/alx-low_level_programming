#include "main.h"

int main(void)
{
	char *propt = "Nshell $";
	char *store = NULL;
        ssize_t size = 0;
        ssize_t getRV;
        char *temp;

	printf("%s", propt);

        getRV = getline(&store, &size, stdin);

        if(getRV == -1)
        {
                free(store);
                exit(0);
        }

        printf("your input %s", store);

        //temp = strtok(store, "\n");

        //printf("your input %s", store);

        free(store);

        return (0);

}
