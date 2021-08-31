/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 07:42:15 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/31 09:04:26 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int has_possible_signifcant_bit(t_stack *a, int bit)
{
	while (a)
	{
		if (((a->data >> bit) & 1) == 0)
			return (1);
		a = a->next;
	}
	return (0);
}

void check_stack_a(size_t size, int bit, t_stack **a, t_stack **b)
{
	for (size_t j = 0; j < size; ++j)
	{
		int num = t_stack_top(a);
		if (has_possible_signifcant_bit(*a, bit))
		{
			if (((num >> bit) & 1) == 1)
			{
				ft_putstr_fd(1, "ra\n");
				rotate_stack(a);
			}
			else
			{
				ft_putstr_fd(1, "pb\n");
				push_stack(a, b);
			}
		}
	}
	while (t_stack_size(*b) > 0)
	{
		ft_putstr_fd(1, "pa\n");
		push_stack(b, a);
	}
}
