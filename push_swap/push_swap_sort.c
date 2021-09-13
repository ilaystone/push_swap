/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:16:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/13 10:49:10 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sort(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	t_stack_init(&b);
	t_stack_init(&a);
	a = set_stack(ac, av);
	if (a != NULL && !t_stack_has_duplicates(a))
	{
		push_swap_tokenize(&a);
		push_swap_sequential_sort(&a, &b);
	}
	else
		ft_putstr_fd(2, "Error\n");
	t_stack_destory(&a);
	t_stack_destory(&b);
}
