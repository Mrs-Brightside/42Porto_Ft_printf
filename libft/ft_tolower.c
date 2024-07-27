/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:00:27 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 15:10:47 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c == EOF)
		return (c);
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return ((unsigned char)c);
}
/*
int main (void)
{
	int c;

	c = '\200';
	printf("Original: %d", tolower(c));
	printf("\nFunction: %d\n", ft_tolower(c));
	return (0);
}*/