# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:41:44 by leldiss           #+#    #+#              #
#    Updated: 2021/10/09 15:41:44 by leldiss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
		ft_isprint.o ft_itoa.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_putchar_fd.o \
		ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_strchr.o ft_strdup.o \
		ft_strjoin.o ft_strlcat.o ft_ft_strcpy.o ft_strlen.o ft_strmapi.o \
		ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_substr.o ft_tolower.o ft_toupper.o

INCLUDES = ./
FLAGS = -Wall -Wextra -Werror
all : $(NAME)
$(NAME):$(OBJ)
		ar rc $(NAME) $?
		ranlib $(NAME)
%.o:%.c
		gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@
clean:
		rm -f $(OBJ)
fclean:clean
		rm -f $(NAME)
re:fclean all

.PHONY = all, clean, fclean, re
