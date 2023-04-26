#include "main.h"
/**
* hex_func - function that prints an unsigned int in hexadecimal
* @n: unsigned to be printed
* @c: case of printing (0 = lower, 1 = upper)
* Descriptions: prints unsigned in hexadecimal with _putchar
* Return: size the output
*/
int hex_func(unsigned int n, unsigned int c)
{
	unsigned int len, pow_16, j, digit, num;
	int count = 0;
	char gap;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c == 0)
			gap = 'A' - ':';
		else
			gap = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		pow_16 = 1;
		for (j = 1; j <= len - 1; j++)
			pow_16 *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow_16;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + gap);
			count++;
			n -= digit * pow_16;
			pow_16 /= 16;
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
* x_func - takes an unsigned int an prints it in lowercase hex
* @x: unsigned int to print
* Return: size of the output
*/
int x_func(va_list x)
{
	return (hex_func(va_arg(x, unsigned int), 0));
}
/**
* X_func - takes an unsigned int an prints it in uppercase hex
* @X: unsigned int to print
* Return: size
*/
int X_func(va_list X)
{
	return (hex_func(va_arg(X, unsigned int), 1));
}
