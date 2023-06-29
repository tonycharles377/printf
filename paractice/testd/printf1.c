#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: const char argument
 * 
 * Return: number of characters printed
 * excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);

	int i = 0, count = 0, value = 0;
	int (*f)(va_list);

	if (format == NULL)
		return (0);

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = get_function(&format[i + 1]);
			if (f != NULL)
			{
				value = f(list);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	va_end(list);
	return (count);
}
