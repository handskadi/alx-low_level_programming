#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - MK concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}