#include "main.h"

/**
 * _islower - check for lowercase char
 * description: this will check if the char is lower or uppercase
 * @c:  letter to be checked
 * Return: 1 or  0
 */
int _islower(int c)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (c == al)
			return (1);
		else
			return (0);
		al++;
	}
}
