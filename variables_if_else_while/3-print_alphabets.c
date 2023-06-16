#include <stdio.h>

/**
 *  main - Prints the alphabet.
 * 
 * eturn: Always 0 (Success)
 *    
 */
int main(void)
{
	har alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for (i = 0; i < 52; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
