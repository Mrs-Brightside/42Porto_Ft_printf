/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:33:05 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/22 23:16:55 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	const char	*s;
	char		*original;
	char		*copy;

	s = "Hello World";
	original = strdup(s);
	copy = ft_strdup(s);
	printf("Original: %s\n", original);
	printf("Funtion: %s\n", copy);
	free(original);
	free(copy);
	return (0);
}*/