/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_three.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:43:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:45:05 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sort_three(t_stack **a)
{
	int		max;
	int		min;

	max = t_stack_max(*a);
	min = t_stack_min(*a);
	if ((t_stack_index(*a, 0) == max && t_stack_index(*a, 1) != min)
		|| (t_stack_index(*a, 2) == max && t_stack_index(*a, 0) != min)
		|| (t_stack_index(*a, 1) == max && t_stack_index(*a, 2) != min))
	{
		swap_stack(a);
		ft_putstr_fd(1, "sa\n");
	}
}
