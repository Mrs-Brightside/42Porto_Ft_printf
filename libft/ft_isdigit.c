/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:59:33 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/14 12:58:51 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("original: %d", isdigit(c));
	printf("\nfunction: %d\n", ft_isdigit(c));
	return (0);
}
*/