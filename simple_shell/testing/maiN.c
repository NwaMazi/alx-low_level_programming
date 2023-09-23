#include "main.h"

/**
 * main- this program read text file print to STDOUT.
 *
 * Return: 0
 */

int main(void)
{
        char *command = "/bin/ls";
        int exist_status = my_exec(command);

        while (1)
        {
                my_prompt();
                usr_in(command, sizeof(command));
                my_exec(command);
                        if (exist_status == -1)
                        {
                                printf("No such file or directory.\n");
                        }

        }

        return (0);
}
