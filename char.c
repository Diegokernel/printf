/**
 * cha - print characters.
 * @chara: arguments.
 * Return: Always 0.
 */
int cha(va_list chara)
{
	char c = (char)va_arg(chara, int);

	_putchar(c);
	return (1);
}
