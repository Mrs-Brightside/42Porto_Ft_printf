/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:12:57 by tda-cost          #+#    #+#             */
/*   Updated: 2024/06/13 22:17:37 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	len_ptr(unsigned long long n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	put_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		put_ptr(ptr / 16);
		put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + 48), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}

int	prt_ptr(void *ptr)
{
	int	length;

	length = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		length = 5;
	}
	else
	{
		write(1, "0x", 2);
		length = 2;
		put_ptr((unsigned long long)ptr);
		length += len_ptr((unsigned long long)ptr);
	}
	return (length);
}
/*
int	main(void)
{
	int	num = 42;
	int	*ptr = &num;

	prt_ptr(ptr);
	printf("\n%p\n", ptr);
	return (0);
}*/