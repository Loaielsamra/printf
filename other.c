#include "main.h"

/**
 * printrev - prints reverse string
 * @arg: passed argument
 * Return: no. of chars printed
 */
int printrev(va_list arg)
{
	char *s;
	int i, j;

	s = va_arg(arg, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i - 1);
}

/**
 * rot13 - rot13 a string
 * @arg: passed argument
 * Return: no. of chars printed
 */
int rot13(va_list arg)
{
	int i, j;
	char *s;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFHIKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(arg, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(rot[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(s[i]);
	}
	return (i);
}
