/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:06:26 by tda-cost          #+#    #+#             */
/*   Updated: 2024/06/08 18:12:36 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	prt_str(char const *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
/*
int	main(void)
{
	char const	str[] = "Hello World";
	int		count;
	int		count2;

	count = prt_str(str);
	count2 = printf("%s", str);
	prt_str(str);
	printf("\n%s\n", str);
	printf("copy: %d\n", count);
	printf("original: %d\n", count2);
	return (0);
}*/