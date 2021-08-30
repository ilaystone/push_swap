/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:16:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/30 10:18:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sort(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	t_stack_init(&b);
	a = set_stack(ac, av);
	push_swap_tokenize(&a);
	push_swap_radix_sort(&a, &b);
}
