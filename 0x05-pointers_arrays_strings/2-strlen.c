#include "main.h"

/**
 * _strlen -  Function that returns the length of a string
 * Returns number of char in a string
 * @s: string to be counted
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while(s[a] != '\0')
	{
		a++;
	}
	return (a);
}
