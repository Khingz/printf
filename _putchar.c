#include <unistd.h>
/**
 * _putchar - print char to standard output
 * @c: char to print
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
