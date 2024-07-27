# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 11:56:32 by tda-cost          #+#    #+#              #
#    Updated: 2024/05/04 12:28:20 by tda-cost         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Werror -Wextra
RM	= rm -rf
NAME	= libft.a
OBJS	= ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_strlen.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strncmp.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strnstr.o \
		ft_atoi.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_split.o \
		ft_itoa.o \
		ft_strmapi.o \
		ft_striteri.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o

OBJSB = ft_lstnew_bonus.o \
		ft_lstadd_front_bonus.o \
		ft_lstsize_bonus.o \
		ft_lstlast_bonus.o \
		ft_lstadd_back_bonus.o \
		ft_lstdelone_bonus.o \
		ft_lstclear_bonus.o \
		ft_lstiter_bonus.o \
		ft_lstmap_bonus.o


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all