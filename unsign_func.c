#include "main.h"
/**
* unsign_func - function that prints unsigned number
* @u_int: unsigned number
* Return: size
*/
int unsign_func(va_list u_int)
{
	unsigned int len, pow_ten, j, digit, tmp_num, num;
	int count = 0;

	num = va_arg(u_int, unsigned int);
	if (n != 0)
	{
		tmp_num = num;
		len = 0;
		while (tmp_num != 0)
		{
			tmp_num /= 10;
			len++;
		}
		pow_ten = 1;
		for (j = 1; j <= len - 1; j++)
		{
			pow_ten *= 10;
		}
		for (j = 1; j <= len; j++)
		{
			digit = num / pow_ten;
			_putchar(digit + '0');
			count++;
			num -= digit * pow_ten;
			pow_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
