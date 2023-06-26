#include "main.h"

/**
 * printer - prints string an necessary formt\at specifiers
 * @format: main string
 * @args: parameters passed
 * @specifierlist: struct containing all specifiers and
 * corresponding funstions
 * Return: number of characters printed
 */

int printer(const char *format, va_list args, specifier specifierlist[])
{
	int i, j, charsprinted, temp;

	charsprinted = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; specifierlist[j].letter != NULL; j++)
			{
				if (format[i + 1] == specifierlist[j].letter[0])
				{
					temp = specifierlist[j].function(args);
					if (temp == -1)
						return (-1);
					charsprinted += temp;
					break;
				}
			}
			if (format[i + 1] != ' ' && specifierlist[j].letter == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					charsprinted += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			charsprinted++;
		}
	}
	return (charsprinted);
}
