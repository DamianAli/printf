# Printf Project

## Functions

[_printf.c](../printf/blob/printf.c)
```c
/* _printf - function that produces output according to format. */
int _printf(const char *format, ...);
```

[conversion.c](../printf/conversion.c)
```c
/* conv - passes to case function based on conversion specifiers. */
int conv(va_list args, char position, int dircnt);
```

[c_case](../printf/c_case.c)
```c
/* c_case - handle character conversion specifiers. */
void c_case(va_list args);
```

[s_case](../printf/s_case.c)
```c
/* s_case - handle string conversion specifiers. */
int s_case(va_list args, int dircnt);
```

[d_case](../printf/d_case.c)
```c
/* d_case - handle integer conversion specifiers */
int d_case(va_list args);
```

[i_case](../printf/i_case.c)
```c
/* i_case - handle integer conversion specifiers. */
int i_case(va_list args);
```

[_putchar](../printf/putchar.c)
```c
/* _putchar - function that writes characters to stdout. */
int _putchar(char c);
```

[print_str](../printf/print_str.c)
```c
/* print_str - writes a string to stdout. */
int print_str(char *str);
```

[print_int](../printf/print_int.c)
```c
/* print_int - function that prints numbers to stdout. */
int print_int(int n);
```