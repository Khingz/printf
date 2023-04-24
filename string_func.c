#include "main.h"
/**
 * string_func - print a string to standard output
 * @str: string to be printed
 * Return: count
 */

int string_func(va_list str)
{
	char *s;
	int  i = 0;

	s = va_arg(str, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
