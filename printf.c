#include "main.h"

/**
 * _printf - prints arguements passed to it
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int charprinted;
	specifier slist[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"d", printint},
		{"i", printint},
		{"r", printrev},
		{"R", rot13},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);


	va_start(args, format);

	charprinted = printer(format, args, slist);

	va_end(args);

	return (charprinted);
}
