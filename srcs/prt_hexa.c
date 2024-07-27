/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:38:10 by tda-cost          #+#    #+#             */
/*   Updated: 2024/06/08 18:17:13 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hexa_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	put_hexa(unsigned int num, const char conv)
{
	if (num >= 16)
	{
		put_hexa(num / 16, conv);
		put_hexa(num % 16, conv);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
		{
			if (conv == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			else if (conv == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	prt_hexa(unsigned int num, const char conv)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		put_hexa(num, conv);
	return (hexa_len(num));
}
/*
int	main(void)
{
	unsigned int num = 123456;
	char conv = 'x';

	int len = prt_hexa(num, conv);
	printf("\nLength: %d\n", len);

	conv = 'X';
	len = prt_hexa(num, conv);
	printf("\nLength: %d\n", len);

	return (0);
}*/