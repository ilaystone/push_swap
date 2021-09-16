# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:09:36 by ikhadem           #+#    #+#              #
#    Updated: 2021/09/16 17:11:30 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := checker

SRC :=	check_args_duplicates_bonus.c \
		check_args_numeric_bonus.c \
		check_args_value_bonus.c \
		checker_bonus.c \
		checker_check_errors_bonus.c \
		checker_execute_bonus.c \
		checker_execute_instructions_bonus.c \
		checker_push_bonus.c \
		checker_reverse_rotate_bonus.c \
		checker_rotate_bonus.c \
		checker_set_stack_bonus.c \
		checker_swap_bonus.c \

OBJ := $(SRC:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
INCLUDE = -I. -I../t_stack/ -I../utils/
HDR = checker_bonus.h
LIBS = -L../t_stack/ -lstack -L../utils/ -lutils

%.o : %.c $(HDR)
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