/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:56:18 by tda-cost          #+#    #+#             */
/*   Updated: 2024/06/08 18:15:11 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	prt_int(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = prt_str(num);
	free(num);
	return (len);
}
/*
int	main(void)
{
	int	n;
	
	n = 420;
	prt_int(n);
	printf("\n%d\n", n);
}
*/