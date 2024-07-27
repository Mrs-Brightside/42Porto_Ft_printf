/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:55:17 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 15:10:55 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c == EOF)
		return (c);
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return ((unsigned char)c);
}
/*
int main (void)
{
	int c;

	c = 'i';
	printf("Original: %d", toupper(c));
	printf("\nFunction: %d\n", ft_toupper(c));
	return (0);
}*/