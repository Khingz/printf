#ifndef MAIN_H
#define MAIN_H

/* c header files*/
#include <stdarg.h>
#include <unistd.h>


/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);

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
