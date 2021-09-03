/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sequential_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/03 13:55:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_non_sorted_elements(t_stack **a, t_stack **b, t_stack *lis)
{
	while (t_stack_size(*a) > t_stack_size(lis))
	{
		if (t_stack_index_of(lis, t_stack_top(a)) == -1)
		{
			push_stack(a, b);
			ft_putstr_fd(1, "pb\n");
		}
		else
		{
			rotate_stack(a);
			ft_putstr_fd(1, "ra\n");
		}
	}
}

static void	sort_elements_in_stack_b(t_stack **a, t_stack **b)
{
	
}

void	push_swap_sequential_sort(t_stack **a, t_stack **b)
{
	t_stack		*lis;

	(void)b;
	t_stack_init(&lis);
	if (t_stack_size(*a) == 3)
		push_swap_sort_three(a);
	lis = push_swap_longest_increasing_subsequence(a);
	move_non_sorted_elements(a, b, lis);
	sort_elements_in_stack_b(a, b);
}
