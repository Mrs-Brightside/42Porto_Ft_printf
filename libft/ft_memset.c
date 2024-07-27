/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:55:56 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/14 13:22:01 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	char    b[] = "Hello World!";
	
	puts(b);
	printf("original: %p\n", memset(b, '$', 4));
	printf("function: %p\n", ft_memset(b, '$', 4));
	puts(b);

	return (0);
}*/