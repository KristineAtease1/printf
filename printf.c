#include main.h

/**
 * printf - Function to produce an output to a format
 * return - the number of characters printed excluding the null byte used to end output to strings
 * description - call the printing function depending on the conversion specifiers 
 */

int _printf(const char *format, ...)
{
  char *p, *z;
  int k = 0;
  va_list kp;
  params_t params = PARAMS_INIT;

  va_start(kp, format);
  if (!format || format[1] == ' ' && !format[2])
    return(-1);
  if (!format[0] == '%' && format[1] == ' ' && !format[2])
    return(-1);
  for (p= (char *) format: *p; p++)
    {
      init_params(&params, kp);
      if (*p != '%')
	{
	  k += _putchar(*p);
	  continue;
	}
      z = p;
      p++;
      while (get_flag(p, &params))
	{
	  p++;
	}
      p = get_width(p, &params, kp);
      p = get_precision(p, &params, kp);
      if (get_modifier(p, &params))
	p++;
      if (!get_specifier(p))
	k += print_from_(z, p, params.l_modifier || params.h modifier? -1:);
      else
	k += get_print_func(p, kp, &params);
    }
  _putchar(BUF_FLUSH);
  va_end(kp);
  return(k);
}

  
