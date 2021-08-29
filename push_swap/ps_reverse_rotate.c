/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:19:17 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 15:24:38 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_stack(t_stack **s)
{
	t_stack		*iter;
	t_stack		*tail;

	iter = *s;
	while (iter->next->next)
		iter = iter->next;
	tail = iter->next;
	iter->next = NULL;
	tail->next = (*s);
	*s = tail;
}

void	reverse_rotate_both(t_stack **a, t_stack **b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
}
