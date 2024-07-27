/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:51:15 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/28 13:34:26 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		sign;

	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10 * sign, fd);
	}
	c = n % 10 * sign + 48;
	ft_putchar_fd(c, fd);
}
/*
int main(void)
{
	int n;
	int fd;

	n = -2147483648;
	fd = 1;
	ft_putnbr_fd(n, fd);
}*/