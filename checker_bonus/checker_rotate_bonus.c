/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:05:26 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/16 17:05:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
