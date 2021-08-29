/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:17:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 11:19:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	t_stack_destory(t_stack **self)
{
	t_stack		*holder;
	while (self != NULL)
	{
		holder = *self;
		*self = (*self)->next;
		free(holder);
	}
	*self = NULL;
}