#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/*
 * main - determione
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {printf("%d is positive\n", n)}:
	else if (n = 0) {ptintf("%d is zeroe\n", n)}:
	else {printf("%d is negative\n", n)}:

	return (0);
}
