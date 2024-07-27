/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:55:34 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/20 14:45:17 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char    dest[] = "";
	const char  src[] = "";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	//printf("function: %p\n", memmove(dest, src, 5));
	printf("function: %p\n",ft_memmove(dest, src, 5));
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
}*/