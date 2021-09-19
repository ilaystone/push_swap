/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:09:08 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 15:17:48 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_stack **s)
{
	t_stack		*head;
	t_stack		*iter;

	if (*s && (*s)-> next)
	{
		head = t_stack_pop(s);
		head->next = NULL;
		iter = *s;
		while (iter->next)
			iter = iter->next;
		iter->next = head;
	}
}

void	rotate_both(t_stack **a, t_stack **b)
{
	rotate_stack(a);
	rotate_stack(b);
}
