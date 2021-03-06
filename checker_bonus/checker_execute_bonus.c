/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_execute_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:09:17 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/23 16:12:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	checker_execute(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	t_stack_init(&b);
	t_stack_init(&a);
	a = set_stack(ac, av);
	if (a != NULL && !t_stack_has_duplicates(a))
	{
		checker_execute_instructions(&a, &b);
		if (t_stack_size(b) > 0)
			ft_putstr_fd(1, "KO\n");
		else if (t_stack_is_sorted(a))
			ft_putstr_fd(1, "OK\n");
		else
			ft_putstr_fd(1, "KO\n");
	}
	else
		ft_putstr_fd(2, "Error\n");
	t_stack_destory(&a);
	t_stack_destory(&b);
}
