#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



void my_prompt(void);
void customPrint(const char *message);
int my_exec (char *command);
void usr_in(char *command, size_t size);
void customPrint(const char *talk);


#endif
