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
int rot_func(va_list str);
int octal_func(va_list num);
int rev_func(va_list rev);
int x_func(va_list x);
int X_func(va_list X);
int unsign_func(va_list u_int);

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
