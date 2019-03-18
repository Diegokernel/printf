/**
 * str - print a string
 * @strn: arguments
 * Return: Always 0.
 */
int str(va_list strn)
{
	int i;
	char *s;

	s = va_arg(strn, char *);
	for (i = 0; s[i] != '\0'; i++)
		i = i + _putchar(s[i]);
	if (s == NULL)
		s = "(null)";
	return (i);
}
