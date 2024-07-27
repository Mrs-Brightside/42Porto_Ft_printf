# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 17:37:17 by tda-cost          #+#    #+#              #
#    Updated: 2024/06/08 18:17:46 by tda-cost         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a
RM	= rm -rf
AR = ar rcs

SRCS = ft_printf.c \
		srcs/prt_hexa.c \
		srcs/prt_int.c \
		srcs/prt_ptr.c \
		srcs/prt_str.c \
		srcs/prt_unsigned.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all