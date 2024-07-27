/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:02:03 by tda-cost          #+#    #+#             */
/*   Updated: 2024/06/08 18:45:49 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include <stdbool.h>

int	ft_printf(const char *format, ...);
int	prt_str(char const *str);
int	prt_ptr(void *ptr_addr);
int	prt_int(int n);
int	prt_unsigned(unsigned int nbr);
int	prt_hexa(unsigned int nbr, const char conv);

#endif