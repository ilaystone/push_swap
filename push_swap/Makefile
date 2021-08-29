# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 10:08:33 by ikhadem           #+#    #+#              #
#    Updated: 2021/08/29 15:08:39 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

SRC :=	push_swap.c \
		check_error.c \
		check_args_numeric.c \
		check_args_value.c \
		check_args_duplicates.c \
		push_swap_sort.c \
		push_swap_set_stack.c \
		push_swap_tokenize.c \
		ps_push.c \
		ps_reverse_rotate.c \
		ps_rotate.c \
		ps_swap.c \

OBJ := $(SRC:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
INCLUDE = -I. -I../t_stack/ -I../utils/
LIBS = -L../t_stack/ -lstack -L../utils/ -lutils

%.o : %.c
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	make -C ../t_stack/
	make -C ../utils/
	$(CC) $(FLAG) $(INCLUDE) $(OBJ) $(LIBS) -o $(NAME)

clean :
	make clean -C ../t_stack/
	make clean -C ../utils/
	rm -f $(OBJ)

fclean : clean
	make fclean -C ../t_stack/
	make fclean -C ../utils/
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re