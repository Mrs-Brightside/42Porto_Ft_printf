/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:07:00 by tda-cost          #+#    #+#             */
/*   Updated: 2024/04/28 18:23:47 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_tolower2(unsigned int i, char *c)
{
	if ((*c >= 'A' && *c <= 'Z') || i != 0)
	{
		*c += 32;
	}
}

int main(void)
{
	char	*s;

	s = "ABCD";
	ft_striteri(s, ft_tolower2);
	printf("%s\n", s);
	return(0);
}*/