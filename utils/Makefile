# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 11:00:08 by ikhadem           #+#    #+#              #
#    Updated: 2021/09/16 17:17:44 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libutils.a

SRC :=	ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_isdigit.c \
		ft_isspace.c \
		ft_strisdigit.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_atol.c \
		ft_strlen.c \
		ft_putnbr.c \
		ft_math_borders.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strsplit.c \
		ft_bzero.c \

OBJ :=	$(SRC:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
INCLUDE = -I.

%.o : %.c
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re