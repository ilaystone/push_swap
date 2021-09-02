/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_longest_increasing_subsequence.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:03:47 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/02 10:19:20 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	rotate_smallest_To_top(t_stack **copy)
// {
// 	size_t		index;

// 	index = t_stack_index_of(*copy, 0);
// 	while (index--)
// 		rotate_stack(copy);
// }

// static int	lis(t_stack **copy)
// {
// 	t_stack		*iter_i;
// 	t_stack		*iter_j;

// 	iter_i = *copy;
// 	while (iter_i)
// 	{
// 		iter_j = *copy;
// 		while (iter_j)
// 		{
// 			if (iter_i->data == iter_j->data)
// 				break ;
// 			if ()
// 			iter_j = iter_j->next;
// 		}
// 		iter_i = iter_i->next;
// 	}
// }

// void	push_swap_longest_increasing_subsequence(t_stack **a)
// {
// 	t_stack		*copy;

// 	copy = t_stack_copy(*a);
// 	rotate_smallest_To_top(&copy);
// 	lis(&copy);
// 	t_stack_display(copy);
// }
