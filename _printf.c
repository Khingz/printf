#include "main.h"

int _printf(const char *format, ...)
{
	va_list params;
	int (*sp_f)(va_list);
	int i = 0, count = 0;
	
	if (format == NULL)
	{
		return (-1);
	}
	va_start(params, format);
	while (format[i])
	{
		if (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
	}

	va_end(params);
	return (0);
}
