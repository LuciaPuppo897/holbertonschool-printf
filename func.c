#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	const char *i;
  int c; 
  int s; 
  int num; 

  va_list(arg);
  va_start(arg, format);

  for (i = format; *i != '\0'; i++)
  {
    if (*i != '%')
    {
      putchar(*i);
      continue;;
    }
  
    if (*(i + 1) == "%" || *(i + 1) == "\0")
    // handle the double '%' or end of  format string
    {
      putchar('%');
      i++;
      continue; 
    }
   
    if (*i == 'c')
    {
      c = va_arg(arg, int);
      putchar(c);
    }
  }
  
  int num_args = strlen(format);
  for(s = 0; s < num_args; s++)
  {
    putchar(s);    
  }

  if (*i == "d")
  {
    long int num = va_arg(arg, int);
    if (num < 0)
    {
      num = -num;
      putchar('-');
    }
    putchar('0' + num);
  }

  if (*i == '%' && *(i + 1) == 'i')
  {
    i++;
    putchar("%");
  }

  va_end(arg);
  return(0);
}
