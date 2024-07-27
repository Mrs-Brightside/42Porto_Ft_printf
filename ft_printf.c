/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:01:04 by tda-cost          #+#    #+#             */
/*   Updated: 2024/07/04 22:10:52 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char conv, va_list args)
{
	if (conv == '%')
		return (write(1, "%", 1));
	else if (conv == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (conv == 's')
		return (prt_str(va_arg(args, char const *)));
	else if (conv == 'p')
		return (prt_ptr(va_arg(args, void *)));
	else if (conv == 'd' || conv == 'i')
		return (prt_int(va_arg(args, int)));
	else if (conv == 'u')
		return (prt_unsigned(va_arg(args, unsigned int)));
	else if (conv == 'x' || conv == 'X')
		return (prt_hexa(va_arg(args, unsigned int), conv));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, args);
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	int	count;
	int	num = 42;
	int	*ptr = &num;

	count = ft_printf("char: %c. String: %s. Pointer: %p. Decimal: %d. 
		Integer: %i. Unsigned decimal: %u. Hexadecimal lower: %x. 
		Hexadecimal Upper: %X. Percent: %%\n", "a", "Hello World", ptr, 42, 
		42, 42, 123456789, 123456789);
	printf("char: %c. String: %s. Pointer: %p. Decimal: %d. Integer: %i. 
	Unsigned decimal: %u. Hexadecimal lower: %x. Hexadecimal Upper: %X. 
	Percent: %%\n", "a", "Hello World", ptr, 42, 42, 42, 123456789, 
	123456789);
	ft_printf("The number of words are %d\n", count);
	printf("The number of words are %d\n", count);
}
*/