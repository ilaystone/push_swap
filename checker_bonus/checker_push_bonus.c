/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:06:19 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:09:49 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	push_stack(t_stack **s1, t_stack **s2)
{
	t_stack		*temp;

	if (t_stack_size(*s1) > 0)
	{
		temp = t_stack_pop(s1);
		t_stack_push(s2, temp->data);
		free(temp);
	}
}
