/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sequential_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:17:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/02 10:26:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap_sequential_sort(t_stack **a, t_stack **b)
{
	(void)b;
	if (t_stack_size(*a) == 3)
		push_swap_sort_three(a);
	t_stack_display(*a);
}
