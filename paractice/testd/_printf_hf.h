#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
/**
 *  * struct functs - structure funcs
 *   * @format: specifier to be checked
 *    * @f: function to be passed
 *     */
typedef struct funcs
{
	char *format;
	int (*f)(va_list);
}funcs_t;

int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_mod(va_list list);

#endif
