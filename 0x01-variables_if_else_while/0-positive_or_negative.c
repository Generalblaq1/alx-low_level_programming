#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if the number is positive , negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Xd is positive\n", n);
	}
	else if (n == 0)
	{
		printf("Xd is zero\n", n);
	}
	else
	{
		printf("Xd is negative\n", n);
	}
	return (0);
}
