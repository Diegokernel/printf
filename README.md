# How to do the function printf with 4 format modifiers

### Prototype
#### `int _printf(const char *format, ...)` Returns the number of characters

.SHDESCRIPTION - Print based on the format and look for specifiers 

### Usage
- Includes `holberton.h`
- Calls the function: `_printf` passed in a string with optional arguments
- Use format specifiers for desired output
- Function returns `-1` upon error and `(null)` if a string argument is `NULL`


printed (int).

	0."I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life."

  		> Function that produces output according to a format.
		> Formats character (c) and string (s).

.SHFUNCTIONS:

printed (char and str).

	print_c.c() Function that print a caracter. In other words "this function read a character. The right argument
	argument (c) is a pointer to char; and it does not add the '\0' character."

	print_s.c() Function that print a string. In other words "this function read a string. The right argument (s) is
	a pointer to an Array of char type that is big enough to keep the string and the null character ('\0') that is
	authomatic added.

	1. Education is when you read the fine print. Experience is what you get if you don't.

		> Function that produces output according to a format.
		> Formats digit (d) and integer (i).

.SHFUNCTIONS:

	int_i.c() Function that prints an integer. In other words "The argument is a pointer to an integer"

	int_d.c() Funtion that prints an integer. In other words "The argument is a pointer to an integer"

---

### Example Usage
- `_printf("Hello, world\n")` *prints "Hello, world" followed by a new line*
- `_printf("Hello %s", "Holberton")` *prints "Hello, Holberton"*
- `_printf("%d\n", 777)` *printf the decimal number, 777 followed by a new line*
- `_printf("%c", 'v')` *prints the character 'v'*

## Author: Diego and Diana.

