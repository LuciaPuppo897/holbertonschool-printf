#include "main.h"
/**
* call_functions - call the needed function
*@format: the specific format
*@args: arguments
*Return: a pointer to that function
*/

int call_functions(char format, va_list args)

{
	int i = 0;
	int count = 0;

form_t specifiers[] = {
	{'s', print_s},
	{'c', print_c},
	{'d', print_d},
	{'%', print_p},
	{'i', print_d},
	{0, NULL},
};

while (specifiers[i].form)
{
if (format == specifiers[i].form)
	{
	count += specifiers[i].f(args);
	}
	i++;

	if (count == 0)
	{
		count += _putchar('%');
	count += _putchar (format);

}
}
	return (count);
}
