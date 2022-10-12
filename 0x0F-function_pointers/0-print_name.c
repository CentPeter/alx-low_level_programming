/**
 * print_name - to print a name
 * @name: points to name
 * @f: function of pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
