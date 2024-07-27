/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:11:27 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/17 22:56:49 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(b + i) = '\0';
		i++;
	}
}
/*
int	main(void)
{
	charb[] =	 "Hello World!";

	puts(b);
	bzero(b, 4);
	//ft_bzero(b, 4);
	puts(b);

	return (0);
}*/