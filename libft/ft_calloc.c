/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:06:23 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/22 22:37:52 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main(void)
{
	size_t  nmemb;
	size_t  size;
	int     *arr;
	size_t     i;

	size = sizeof(int);
	nmemb = 10;
	arr = ft_calloc(nmemb, size);
	i = 0;
	if (!arr)
	{
		printf("Memory allocation failed\n");
	}
	while (i < nmemb)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/