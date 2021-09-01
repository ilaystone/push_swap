/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sequential_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 14:27:36 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap_sequential_sort(t_stack **a, t_stack **b)
{
	(void)b;
	if (t_stack_size(*a) == 3)
		push_swap_sort_three(a);
	push_swap_max_sorted_sequence(a);
}
