#include "main.h"

/**
 * get_specifier_func - gets appropraite specifier function
 * @specifier: specifier type
 * Return: Null or pointer address
 */
int (*get_specifier_func(const char *specifier))(va_list)
{
	int i = 0;
	sps_t sps[] = {
		{"c", char_func},
		{"s", string_func},
		{NULL, NULL}
	};

	while (sps[i].sp)
	{
		if (sps[i].sp[0] == (*specifier))
			return (sps[i].f);
		i++;
	}
	return (NULL);
}
