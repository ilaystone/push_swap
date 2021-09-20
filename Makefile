# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 10:08:33 by ikhadem           #+#    #+#              #
#    Updated: 2021/09/19 14:19:44 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

SRC :=	push_swap_exec/push_swap.c \
		push_swap_exec/check_args_numeric.c \
		push_swap_exec/check_args_value.c \
		push_swap_exec/check_args_duplicates.c \
		push_swap_exec/push_swap_sort.c \
		push_swap_exec/push_swap_set_stack.c \
		push_swap_exec/push_swap_sequential_sort.c \
		push_swap_exec/ps_push.c \
		push_swap_exec/ps_reverse_rotate.c \
		push_swap_exec/ps_rotate.c \
		push_swap_exec/ps_swap.c \
		push_swap_exec/push_swap_sort_three.c \
		push_swap_exec/push_swap_tokenize.c \
		push_swap_exec/push_swap_longest_increasing_subsequence.c \
		push_swap_exec/push_swap_sort_stack_b.c \
		push_swap_exec/push_swap_best_pos.c \
		push_swap_exec/push_swap_insert_next.c \

OBJ := $(SRC:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
INCLUDE = -I./push_swap_exec -I./t_stack/ -I./utils/
HDR = push_swap_exec/push_swap.h
LIBS = -L./t_stack/ -lstack -L./utils/ -lutils

%.o : %.c $(HDR)
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	make -C ./t_stack/
	make -C ./utils/
	$(CC) $(FLAG) $(INCLUDE) $(OBJ) $(LIBS) -o $(NAME)

clean :
	make clean -C ./t_stack/
	make clean -C ./utils/
	make clean -C ./checker_bonus/
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./t_stack/
	make fclean -C ./utils/
	make fclean -C ./checker_bonus/
	rm -f $(NAME)
	rm -f checker

re : fclean all

bonus: all
	make -C ./checker_bonus/
	mv ./checker_bonus/checker ./checker

.PHONY : all clean fclean re