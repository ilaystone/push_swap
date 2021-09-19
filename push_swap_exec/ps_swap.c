/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:03:21 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 15:06:55 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack **s)
{
	int		holder;

	if (*s && (*s)-> next)
	{
		holder = (*s)->data;
		(*s)->data = (*s)->next->data;
		(*s)->next->data = holder;
	}
}

void	swap_both(t_stack **a, t_stack **b)
{
	swap_stack(a);
	swap_stack(b);
}
