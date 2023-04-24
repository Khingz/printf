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
		if (format[i] == '\0')
		{
			return (count);
		}
		sp_f = get_specifier_func(&format[i + 1]);
		if (sp_f)
		{
			count += sp_f(params);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
		{
			return (-1);
		}
		_putchar(formar[i]);
		count++;
	}

	va_end(params);
	return (0);
}
