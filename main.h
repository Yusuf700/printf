#ifndef PRINT_H
#define PRINT_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/*
* struct format - match the conversion specifiers for printf
** @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
* @f: type pointer to function for the conversion specifier
*
*/

int _printf(const char *format, ...);

#endif
