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
}

/**
 * print_string - prints string to stdout
 * @list: variadic parameters
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	int i = 0, count = 0, value = 0;
	char *s = (char *)va_arg(list, char *);

	while (s[i] != '\0')
	{
		value = write(1, &s[i], 1);
		count = count + value;
		i++;
	}
	s[i] = '\0';
	return (count);
}
