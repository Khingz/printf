#include "main.h"
/**
  * rot_func - encodes a string into rot13.
  * str: string to convert
  * Return: count
  */
int rot_func(va_list str)
{
	int j, i, count = 0;
	char *ref;
	char inpt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char oupt[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	ref = va_arg(str, char *);
	if (ref == NULL)
	{
		ref = "(null)";
	}
	for (j = 0; ref[j] != '\0'; j++)
	j = 0;
	while (ref[j] != '\0')
	{
		for (i = 0; inpt[i] != '\0'; i++)
		{
			if (ref[j] == inpt[i])
			{
				_putchar(oupt[i]);
				count++;
				break;
			}
		}
		j++;
	}
	return (count);
}
