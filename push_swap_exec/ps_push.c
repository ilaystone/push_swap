/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:32:49 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 15:26:29 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack **s1, t_stack **s2)
{
	t_stack		*temp;

	temp = t_stack_pop(s1);
	t_stack_push(s2, temp->data);
	free(temp);
}
