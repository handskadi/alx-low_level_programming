#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
/**
 * main - assign a random number to int n
 * each time it executes and prints it
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n);
	return (0);
}
