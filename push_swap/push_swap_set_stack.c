/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_set_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:16:54 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 14:18:20 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*set_stack(int ac, char **av)
{
	t_stack		*a;

	t_stack_init(&a);
	while (ac-- != 1)
	{
		t_stack_push(&a, ft_atoi(av[ac]));
	}
	return (a);
}
