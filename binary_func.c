#include "main.h"

int int_to_bin(unsigned int num);

int binary_func(va_list n)
{
	int count;
	unsigned int num;

	num = va_arg(n, int);
	count = 0;
	
	if (num != 0)
	{
		count = int_to_bin(num);
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/*
 *
 */
int int_to_bin(unsigned int num)
{
	int count;

	count = 0;
	if (num > 1)
	{
		int_to_bin(num / 2);
	}
	count++;
	_putchar((num % 2) + '0');
	return count;
}
