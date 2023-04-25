#ifndef MAIN_H
#define MAIN_H

/* c header files*/
#include <stdarg.h>
#include <unistd.h>


/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int char_func(va_list ch);
int string_func(va_list str);
int (*get_specifier_func(const char *specifier))(va_list);
int percent_func(va_list args);
int int_dec_func(va_list val);
int binary_func(va_list num);

/* struct definition */
/**
  * struct specifier - Struct specifier
  * @sp: specifiers
  * @f: corresponding func
  */
typedef struct specifier
{
	char *sp;
	int (*f)(va_list);
} sps_t;

#endif
