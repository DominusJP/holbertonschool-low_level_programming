#include <stdio.h>

/**
 * main - Prints alpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
