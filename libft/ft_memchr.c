/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:00:51 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 14:43:18 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "Hello World";
	const char	c = 'e';
	char	*ft_res;
	char	*res;

	res = memchr(s, c, 12);
	ft_res = ft_memchr(s, c, 12);
	printf("String after |%c| is - %s\n", c, res);
	printf("String after |%c| is - %s\n", c, ft_res);
	return (0);
}
*/