#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int _putchar(int z);
int print_char(va_list kp, params_t *params);
int print_int(va_list kp, params_t *params);
int print_string(va_list kp, params_t *params);
int print_percent(va_list kp, params_t *params);
int print_S(va_list kp, params_t *params);


#endif
