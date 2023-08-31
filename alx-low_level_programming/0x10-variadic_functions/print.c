#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list prints;
	char *tmp, sep = " ";
	int i = 0;

	va_start(prints, format);

	if (format)
	{
		while (format[i])
		{
			
			switch (format[i])
			{
				case 'c':
					printf("%c", (char) va_arg(prints, int));
					break;
				case 'i':
					printf("%d", va_arg(prints, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(prints, double));
					break;
				case 's':
					tmp = va_arg(prints, char*);
					if (!tmp)
						tmp = "(nil)";
					printf("%s", tmp);
					break;
					
			}

			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
						format[i] == 's') && format[(i + 1)] != '\0')
				printf(", ");
			i++;
		}
	
		va_end(prints);
		printf("\n");
}

