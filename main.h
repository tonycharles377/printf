#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct funcs - structure funcs
 * @format: specifier to be checked
 * @f: function to be passed
 */
typedef struct funcs
{
	char *format;
	int (*f)(va_list);
} funcs_t;
int _putchar(char);
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_p(va_list list);
int print_numd(va_list list);

#endif
