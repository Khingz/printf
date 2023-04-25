#include "main.h"

int _length(int num);
int ten_power(int len);

/**
* int_dec_func - prints integers and decimal numbers
* @val: integer or decimal to print
* Return: number of integer
*/
int int_dec_func(va_list val)
{
	int len, pow_ten, count, i, num, digit;

	num = va_arg(val, int);
	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			_putchar('-');
			count++;
		}
		len = _length(num);
		pow_ten = ten_power(len);
		for (i = 1; i <= len; i++)
		{
			digit = num / pow_ten;
			if (num < 0)
				_putchar((digit * -1) + 48);
			else
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

/**
 * _length - checks the length of an int or dec
 * @num: number to check length
 * Return: number counted
 */
int _length(int num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
 * ten_power - checks to see the power in tens of a number
 * @len: the length of the int or dec
 * Return: power counted
 */
int ten_power(int len)
{
	int power, i;

	power = 1;
	i = 1;
	while (i <= len - 1)
	{
		power *= 10;
		i++;
	}
	return (power);
}
