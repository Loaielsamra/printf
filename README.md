# Printf

## Synopsis
This is a simple implementation of printf function that formats and prints data

## Description
The _printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## Usage
+ All the files are to be compiled on Ubuntu 20.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
+ Include the "main.h” header file on the functions using the _printf()
