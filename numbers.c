#include "main.h"

/**
 * pnumber - prints number passed
 * @arg: arguements passed
 * Return: numbers of chars printed
 */

int pnumber(va_list arg)
{
	int length, n, d;
	unsigned int num;

	n = va_arg(arg, int);
	length = 0;
	d = 1;

	if (n < 0)
	{
		length += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / d > 9;)
		d *= 10;
	for (; d != 0;)
	{
		length += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (length);
}
