/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:59:06 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 14:06:09 by ikhadem          ###   ########.fr       */
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

t_stack		*set_stack(int , char **);
int			push_swap_check_errors(int , char **);
int			check_args_numeric(int , char **);
int			check_args_within_limits(int , char **);
int			cheack_args_duplicates(int , char **);
void		push_swap_sort(int , char **);
void		push_swap_tokenize(t_stack **a);
void		push_swap_sequential_sort(t_stack **, t_stack **);
void		push_swap_sort_three(t_stack **a);
void		push_swap_max_sorted_sequence(t_stack **a);

/********************
**** OPERATIONS ****
********************/

void		swap_stack(t_stack **);
void		swap_both(t_stack ** , t_stack **);
void		rotate_stack(t_stack **);
void		roatate_both(t_stack ** , t_stack **);
void		reverse_rotate_stack(t_stack **);
void		reverse_roatate_both(t_stack ** , t_stack **);
void		push_stack(t_stack **, t_stack **);

#endif