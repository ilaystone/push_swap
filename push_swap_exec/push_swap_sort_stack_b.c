/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_stack_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:12:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:49:45 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	align_stack(t_stack **a)
{
	int		pos;
	int		i;

	pos = t_stack_index(*a, 0);
	if (pos < (int)t_stack_size(*a) - pos)
	{
		i = pos;
		while (i--)
		{
			reverse_rotate_stack(a);
			ft_putstr_fd(1, "rra\n");
		}
	}
	else
	{
		i = t_stack_size(*a) - pos;
		while (i--)
		{
			rotate_stack(a);
			ft_putstr_fd(1, "ra\n");
		}
	}
}

void	sort_elements_in_stack_b(t_stack **a, t_stack **b)
{
	int		*best_pos;

	while (t_stack_size(*b))
	{
		best_pos = find_best(a, b);
		insert_next(a, b, best_pos);
	}
	align_stack(a);
}
