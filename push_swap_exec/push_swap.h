/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:59:06 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/19 14:08:55 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "t_stack.h"
# include "ft_utils.h"
# include <stdio.h>

# define P_MAX_INT 2147483647
# define P_MIN_INT -2147483648

/***************
**** protos ****
***************/

t_stack		*set_stack(int ac, char **av);
t_stack		*push_swap_longest_increasing_subsequence(t_stack **a);
int			push_swap_check_errors(int ac, char **av);
int			check_args_numeric(int ac, char **av);
int			check_args_within_limits(int ac, char **av);
int			cheack_args_duplicates(int ac, char **av);
int			check_str_within_limit(char *str);
int			*find_best(t_stack **a, t_stack **b);
int			check_str(char *str);
void		push_swap_sort(int ac, char **av);
void		push_swap_tokenize(t_stack **a);
void		push_swap_sequential_sort(t_stack **a, t_stack **b);
void		push_swap_sort_three(t_stack **a);
void		sort_elements_in_stack_b(t_stack **a, t_stack **b);
void		insert_next(t_stack **a, t_stack **b, int *pos);

/********************
**** OPERATIONS ****
********************/

void		swap_stack(t_stack **s);
void		swap_both(t_stack **a, t_stack **b);
void		rotate_stack(t_stack **a);
void		rotate_both(t_stack **a, t_stack **b);
void		reverse_rotate_stack(t_stack **s);
void		reverse_rotate_both(t_stack **a, t_stack **b);
void		push_stack(t_stack **a, t_stack **b);

#endif