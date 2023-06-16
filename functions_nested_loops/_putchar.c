#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The characer to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _putchart(char c)
{

	return (write(1 ,&c, 1));
}
