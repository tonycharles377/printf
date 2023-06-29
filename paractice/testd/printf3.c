#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - prints character to stdout
 * @list: variadic parameters
 * 
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char c = (char)va_arg(list, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}

/**
 * print_string - prints string to stdout
 * @list: variadic parameters
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	return (0);
}

/**
 * print_mod - prints modulus to stdout
 * @list: variadic parameters
 * 
 * Return: number of characters printed
 */

int print_mod(va_list list)
{
	return (0);
}
