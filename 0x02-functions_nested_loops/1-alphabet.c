#include "main.h"

/**
 * main - entry point
 * description: program that prints all alphabets in lowercase
 * Return: Always 0 (Success_)
 */

int main(void)
{
	print_alphabet();
	return (0);
}


/**
 * print_alphabet - entry point
 * description: function loops letters
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
