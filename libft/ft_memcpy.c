/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:19:05 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/15 22:00:20 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int	main (void)
{
	const char src[20] = "Hello World!";
	char dest[20];
	strcpy(dest, "Goodbye bitches!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 5);
	printf("After memcpy dest = %s\n", dest);
	return(0);
}*/