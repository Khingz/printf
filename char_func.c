/**
 * char_func - print char to standard output
 * @ch: character to print
 * Return: 1
 */

int char_func(va_list ch)
{
	char c;

	c = va_arg(ch, int);
	_putchar(c);

	return (1);
}
