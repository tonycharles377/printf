#include "main.h"

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
	int i = 0, count = 0, value = 0;
	char *s = (char *)va_arg(list, char *);

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		value = write(1, &s[i], 1);
		count = count + value;
		i++;
	}
	return (count);
}

/**
 * print_perc - prints % symbol
 * @list: variadic parameters
 *
 * Return: number of chars printed
 */
int print_p(va_list list)
{
	(void)list;
	return (_putchar('%'));	
}

/**
 * print_num - prints number to stdout
 * @list: variadic parameters
 *
 * Return: number of digits printed.
 */
int print_numd(va_list list)
{
	int count = 0, value = 0, num = (int)va_arg(list, int);

	/*
	if (num < 0)
	{
		value = _putchar('-');
		count = count + value;
		num = -num;
	}
	if (num > 9)
	{
		print_numd(num / 10);
	}*/
	value = _putchar('0' + (num % 10));
	count = count + value;
	return (count);
}
