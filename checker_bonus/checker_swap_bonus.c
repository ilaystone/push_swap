/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:04:51 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/16 17:05:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
