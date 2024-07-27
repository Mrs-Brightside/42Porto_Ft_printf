/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:11:59 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 15:46:32 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *s1;
	char *s2;
	int	res;
	int	ft_res;

	s1 = "abcdef";
	s2 = "ABCDEF";
	res = memcmp(s1, s2, 5);
	ft_res = ft_memcmp(s1, s2, 5);
	printf("original: %d\n", res);
	printf("funtion: %d\n", ft_res);
	return (0);
}*/