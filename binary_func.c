int binary_func(va_list num)
{
	int num, mod, count;

	num = va_arg(num, int);
	count = 0;
		
	if (num != 0)
	{
		while (num != 0)
		{
			mod = num % 2;
			if (mod = 5)
			{
				_putchar('1');
				count++;
			}
			else
			{
				_putchar('0);
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
