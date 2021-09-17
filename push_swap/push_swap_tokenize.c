/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tokenize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:21:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:45:41 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_to_indexes_values(t_stack **a, t_stack **copy)
{
	t_stack		*iter1;
	t_stack		*iter2;
	int			i;

	iter1 = *a;
	while (iter1)
	{
		iter2 = *copy;
		i = 0;
		while (iter2)
		{
			if (iter1->data == iter2->data)
			{
				iter1->data = i;
				break ;
			}
			i++;
			iter2 = iter2->next;
		}
		iter1 = iter1->next;
	}
}

void	push_swap_tokenize(t_stack **a)
{
	t_stack		*copy;

	copy = t_stack_copy(*a);
	t_stack_sort(&copy);
	swap_to_indexes_values(a, &copy);
}
