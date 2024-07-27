/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:51:58 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/17 22:26:21 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
	char		dst[] = "Goodbye heaven!";
	const char	src[] = "Hello World!";

	printf("original: %ld\n", strlcpy(dst, src, 4));
	printf("original dest: %s\n", dst);
	printf("function: %ld\n", ft_strlcpy(dst, src, 4));
	printf("function dest: %s\n", dst);
}
*/