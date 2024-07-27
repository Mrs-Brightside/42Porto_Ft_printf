/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:15:59 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/28 18:06:06 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char	ft_tolower2(unsigned int i, char c)
{
	if ((c >= 'A' && c <= 'Z') || i != 0)
	{
		c += 32;
	}
	return (c);
}

int main(void)
{
	char const      *s;

	s = "ABCD";
	printf("%s\n", ft_strmapi(s, ft_tolower2));
	return(0);
}*/