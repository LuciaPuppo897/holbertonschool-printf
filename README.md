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

## File Descriptions
* **putchar.c** :  contains the _putchar function , which writes a character to stdout.
* **main.h** : contains all function prototypes used for _printf. 
* **func d_i.c** : contains the print_d and print_i funcions, which handle %d and %i respectly.
* **func char_s_p.c** : contains the print_c , print_s , print_percent functions, which handle %c, %s and %% .
* **_printf.c** :  contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...); for more information check man_3_printf.
* **man_3_printf** : cointains the manual page for the custom _printf.


## Authors
* **Carlos Franco** - [Github](https://github.com/cfranco87)
* **Lucia Puppo** - [Github](https://github.com/LuciaPuppo897)
