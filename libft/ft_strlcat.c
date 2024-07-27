/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:31:48 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/24 23:09:56 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	j = len_dst;
	if (len_dst < (size - 1) && size > 0)
	{
		while (src[i] != '\0' && (len_dst + i) < (size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_src + len_dst);
}
/*
int main(void)
{
	char		dst[] = "Goodbye heaven!";
	const char	src[] = "Hello World!";

	printf("original: %ld\n", strlcat(dst, src, 4));
	printf("original dest: %s\n", dst);
	printf("function: %ld\n", ft_strlcat(dst, src, 4));
	printf("function dest: %s\n", dst);
}*/