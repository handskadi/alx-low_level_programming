#include <stdio.h>

/**
 * main - Will check the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)

	int i;
	double d;
	char c;

	printf("The size of a int is :%lu \n",(unsigned long)sizeof(i));
	printf("The size of a double is :%lu \n",(unsigned long)sizeof(d));
	printf("The size of a float is :%lu \n",(unsigned long)sizeof(c));
	return (0);
}
