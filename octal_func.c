#include "main.h"
/**
* octal_func - unsigned int argument is converted to unsigned octal
* @num: unsigned to be converted
* Return: size the output
*/
int octal_func(va_list num)
{
	unsigned int len, pow_oct, j, digit, _num, tmp_num;
	int count = 0;

	_num = va_arg(num, unsigned int);
	if (_num != 0)
	{
		tmp_num = _num;
		len = 0;
		while (tmp_num != 0)
		{
			tmp_num /= 8;
			len++;
		}
		pow_oct = 1;
		j = 1;
		while (j < len - 1)
		{
			pow_oct *= 8;
		}
		for (j = 1; j <= len; j++)
		{
			digit = _num / pow_oct;
			_putchar(digit + '0');
			count++;
			_num -= digit * pow_oct;
			pow_oct /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
