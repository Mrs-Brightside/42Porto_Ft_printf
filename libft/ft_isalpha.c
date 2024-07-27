/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:04:48 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/14 12:58:49 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'r';
	printf("original: %d", isalpha(c));
	printf("\nfunction: %d\n", ft_isalpha(c));
	return (0);
}*/
