#include "main.h"

int _printf(const char *format, ...)
{
	va_list params;
	int (*sp_f)(va_list);
	
	if (format == NULL)
	{
		return (-1);
	}
	va_start(params, format);

	va_end(params);
	return (0);
}
