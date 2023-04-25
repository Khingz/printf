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
	return (0);
}

/**
 * _length - checks the length of an int or dec
 * @num: number to check length
 * Return: number counted
 */
int _length(int num)
{
	int len;

	while (num != 0)
	{
		len++;
		num /= 10;
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
	i = 0;
	while (i < len)
	{
		power *= 10;
		i++;
	}
	return (power);
}
