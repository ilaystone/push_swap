/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/31 08:14:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void split_stacks(size_t size, t_stack **a, t_stack **b)
// {
// 	while (size--)
// 	{
// 		push_stack(a, b);
// 		ft_putstr_fd(1, "pb\n");
// 	}
// }

void push_swap_radix_sort(t_stack **a, t_stack **b)
{
	size_t size_a;
	size_t size_b;
	int max_bits;
	int max_num;

	max_bits = 0;
	max_num = t_stack_size(*a) - 1;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	for (int i = 0; i < max_bits; ++i)
	{
		size_a = t_stack_size(*a);
		size_b = t_stack_size(*b);
		check_stack_a(size_a, i, a, b);
		while (t_stack_size(*b) > 0)
		{
			ft_putstr_fd(1, "pa\n");
			push_stack(b, a);
		}
	}
}

// for (int i = 0; i < max_bits; ++i)
// 	{
// 		for (size_t j = 0; j < size; ++j)
// 		{
// 			int		num = t_stack_top(a);
// 				if (((num >> i)&1) == 1)
// 			{
// 				ft_putstr_fd(1, "ra\n");
// 				rotate_stack(a);
// 			}
// 			else
// 			{
// 				ft_putstr_fd(1, "pb\n");
// 				push_stack(a, b);
// 			}
// 		}
// 		while (t_stack_size(*b) > 0)
// 		{
// 			ft_putstr_fd(1, "pa\n");
// 			push_stack(b, a);
// 		}
// 	}
