#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - this program checks string for symbols
 * @str: array str reference
 *
 * Return: 0
 */
int check_num(char *str)
{
	/*variables declaration*/
	unsigned int counts;

	counts = 0;
	while (counts < strlen(str)) /*examine string*/

	{
		if (!isdigit(str[counts]))
		{
			return (0);
		}

		counts++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	/*variables declaration*/
	int counts;
	int str_to_int;
	int sum = 0;

	counts = 1;
	while (counts < argc) /*examines array*/
	{
		if (check_num(argv[counts]))

		{
			str_to_int = atoi(argv[counts]); /*ATOI will convert string to int*/
			sum += str_to_int;
		}

		/*examines if one of the numbers contains any symbols */
		else
		{
			printf("Error\n");
			return (1);
		}

		counts++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
