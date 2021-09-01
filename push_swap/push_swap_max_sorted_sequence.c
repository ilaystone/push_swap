/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_max_sorted_sequence.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:03:47 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 14:30:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_smallest_To_top(t_stack **copy)
{
	size_t		index;

	index = t_stack_index_of(*copy, 0);
	while (index--)
		rotate_stack(copy);
}

void	push_swap_max_sorted_sequence(t_stack **a)
{
	t_stack		*copy;

	copy = t_stack_copy(*a);
	rotate_smallest_To_top(&copy);
	t_stack_display(copy);
}

