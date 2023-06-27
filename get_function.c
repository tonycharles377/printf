#include "main.h"
/**
 * get_function - selects the right function to perform
 * @format: char to check
 *Return: pointer to function
 */
int (*get_function(const char *format))(va_list)
{
	funcs_t array[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	int i;

	if (format == NULL)
		return (NULL);
	i = 0;
	while (array[i].format != NULL)
	{
		if (*format == *array[i].format)
		{
			return (array[i].f);
		}
		i++;
	}
	return (NULL);
}
