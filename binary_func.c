#include "main.h"

int binary_func(va_list n)
{
	int num, mod, count;

	num = va_arg(n, int);
	count = 0;
		
	if (num != 0)
	{
		while (num != 0)
		{
			mod = num % 2;
			if (mod % 2 == 0)
			{
				_putchar('0');
				count++;
			}
			else
			{
				_putchar('1');
				count++;
			}
			num = num / 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
