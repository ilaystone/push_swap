/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_is_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:32:31 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 13:34:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

int		t_stack_is_sorted(t_stack *self)
{
	while(self->next)
	{
		if (self->data > self->next->data)
		{
			return (0);
		}
		self = self->next;
	}
	return (1);
}
