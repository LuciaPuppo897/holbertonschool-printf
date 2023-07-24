# C PRINTF

## Description
'printf' is a function used in programming languages like C, C++, and other languages influenced by C. It is used to display output on the console or terminal. The name "printf" stands for "print formatted" because it allows you to display data with specific formatting.

## On this project we create our own basic printf based on the following taks:

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. 
The format string is composed of zero or more directives.
- [ ] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [ ] Handle conversion specifiers ```d```, ```i```.
- [ ] Create a man page for your function.


## Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:

 - [ ] d, i;
Used to format and display signed integers (decimal representation).

- [ ] c;
The conversion specifier %c in the printf function is used to format and display a single character.

- [ ] s;
Used to format and display null-terminated strings.

- [ ] %;
Used to display the percent symbol % itself.

## Library 

printf is a C function belonging to the ANSI C standard library, for this function we used  
- <stdio.h>
- <stdarg.h>
- <stdlib.h>
  
## Usage 

The printf function is a commonly used function in programming languages like C, C++, and many others. It is used to display formatted output on the console or terminal. Here's a general syntax for using printf:

```ruby
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 *_printf - print f function
 *@format: format
 *Return: alway success
 */

int main() 

{
    int _printf(const char *format, ...)
    return 0;
}
```

In this syntax:

printf is the function name.
"format string" is a string that specifies the format of the output. It can contain plain text and format specifiers, which start with a percent sign % followed by a conversion character. In this case the format specifiers are found in the *format. To access the data types, we used va_arg. For more information you can check man va_arg(3).  

These are values that you want to include in the output, which can be variables, constants, or expressions.

Here's an example to illustrate the usage of printf:

```ruby
#include <stdio.h>
#include "main.h"

int main() {
    int num1 = 10;
    str = "Hello World";
    char letter = 'A';
    
    print_d("Integer: %d\n", num1);
    print_s("str: %s\n", string);
    print_c("Character: %c\n", letter);
    
    return 0;
}
```
Output:

```ruby
Integer: 10
String: "Hello World"
Character: A
```

In this example, we use format specifiers like %d for integers, %s for strings arrays, and %c for characters. In this case we use the different format function simulate what printf will do. 

Note that printf is a versatile function with many format specifiers and options. The specific usage may vary depending on the programming language you are using, so be sure to consult the documentation or language-specific resources for detailed information.


## File Descriptions
* **putchar.c** :  contains the _putchar function , which writes a character to stdout.
* **main.h** : contains all function prototypes used for _printf. 
* **call_functions.c** : contains an auxiliary function used to call all the specific functions to each format that printf handles.
* **_printf.c** :  contains the function _printf, which uses the prototype int _printf(const char *format, ...); and an auxiliary function to handle the formats.
For more information check man_3_printf.
* **functions.c** :  contains the functions print_d, print_c, print_s, print_p which are used to handle %d and %i, %c, %s and %% respectively.

## Flowchart

![Flowchart](https://ibb.co/Jmz274k)

## Authors
* **Carlos Franco** - [Github](https://github.com/cfranco87)
* **Lucia Puppo** - [Github](https://github.com/LuciaPuppo897)
