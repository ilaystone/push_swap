/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/30 12:08:14 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_swap_radix_sort(t_stack **a, t_stack **b)
{
	size_t		size;
	int			max_bits;
	int			max_num;

	size = t_stack_size(*a);
	max_bits = 0;
	max_num = size - 1;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	for (int i = 0; i < max_bits; ++i)
	{
		for (size_t j = 0; j < size; ++j)
		{
			int		num = t_stack_top(a);
			if (((num >> i)&1) == 1)
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
		while (t_stack_size(*b) > 0)
		{
			ft_putstr_fd(1, "pa\n");
			push_stack(b, a);
		}
	}
}
