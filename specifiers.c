#include "main.h"
/**
 * printchar - prints caharcter
 * @arg: passed character
 * Return: 1
 */
int printchar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * printstring - prints string
 * @arg: passed argument
 * Return: no. of characters printed
 */
int printstring(va_list arg)
{
	int i;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = "(nil)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * printpercent - prints %
 * @arg: passed arguement
 * Return: 1
 */
int printpercent(__attribute__((unused))va_list arg)
{
	_putchar('%');
	return (1);
}

/**
 * printint - prints integer
 * @arg: passed argument
 * Return: no. of chars printed
 */
int printint(va_list arg)
{
	int length;

	length = pnumber(arg);
	return (length);
}
