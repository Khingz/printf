#include "main.h"
/**
*rev_func - prints a string in reverse
*@rev: string to print
*Return: number of chars printed
*/
int rev_func(va_list rev)
{
	char *str;
	int i, count;

	count = 0;
	str = va_arg(rev, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (count);
}
