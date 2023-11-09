#include "variadic_functions.h"
/**
 * print_all - to print all
 * @format: the argument specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list sp;

	va_start(sp, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(sp, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(sp, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(sp, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(sp, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(sp);
}
