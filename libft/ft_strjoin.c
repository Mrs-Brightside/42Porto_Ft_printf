/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:48:25 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/23 21:27:57 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joins;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	joins = (char *)malloc(
			sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!joins)
		return (NULL);
	while (s1[i] != '\0')
	{
		joins[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		joins[j] = s2[i];
		j++;
		i++;
	}
	joins[j] = '\0';
	return (joins);
}
/*
int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*joins;

	s1 = "Hello ";
	s2 = "World";
	joins = ft_strjoin(s1, s2);
	printf("Funtion: %s\n", joins);
	free(joins);
	return (0);
}*/