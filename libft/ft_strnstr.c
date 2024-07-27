/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:47:08 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 17:11:29 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*big;
	const char	*little;
	char 		*ptr;
	char		*ft_ptr;

	big = "Foo Bar Baz";
	little = "Bar";
	ptr = strstr(big, little);
	ft_ptr = ft_strnstr(big, little, 5);
	printf("original: %s\n", ptr);
	printf("original: %s\n", ft_ptr);
}*/