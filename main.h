#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifiers - defines struct for conevrsion specifiers
 * @letter: specifier letter
 * @function: corresponding function to letter
 */
struct specifiers
{
	char *letter;
	int (*function)(va_list);
};
typedef struct specifiers specifier;

int _printf(const char *format, ...);
int printer(const char *format, va_list args, specifier specifierlist[]);
int _putchar(char c);
int pnumber(va_list arg);
int printchar(va_list arg);
int printstring(va_list arg);
int printpercent(va_list arg);
int printint (va_list arg);
int printrev(va_list arg);
int rot13(va_list arg);

#endif
