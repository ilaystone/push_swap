/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sequential_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilay <ilay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/02 20:47:57 by ilay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap_sequential_sort(t_stack **a, t_stack **b)
{
	t_stack		*lis;

	(void)b;
	t_stack_init(&lis);
	if (t_stack_size(*a) == 3)
		push_swap_sort_three(a);
	lis = push_swap_longest_increasing_subsequence(a);
}
