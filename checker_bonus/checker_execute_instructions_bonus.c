/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_execute_instructions_bonus.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:02:33 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:20:14 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	apply_instruction(t_stack **a, t_stack **b, char *ins)
{
	if (ft_strcmp("sa\n", ins) == 0)
		swap_stack(a);
	else if (ft_strcmp("sb\n", ins) == 0)
		swap_stack(b);
	else if (ft_strcmp("ss\n", ins) == 0)
		swap_both(a, b);
	else if (ft_strcmp("ra\n", ins) == 0)
		rotate_stack(a);
	else if (ft_strcmp("rb\n", ins) == 0)
		rotate_stack(b);
	else if (ft_strcmp("rr\n", ins) == 0)
		rotate_both(a, b);
	else if (ft_strcmp("rra\n", ins) == 0)
		reverse_rotate_stack(a);
	else if (ft_strcmp("rrb\n", ins) == 0)
		reverse_rotate_stack(b);
	else if (ft_strcmp("rrr\n", ins) == 0)
		reverse_rotate_both(a, b);
	else if (ft_strcmp("pa\n", ins) == 0)
		push_stack(a, b);
	else if (ft_strcmp("pb\n", ins) == 0)
		push_stack(b, a);
	else
		return (0);
	return (1);
}

void	checker_execute_instructions(t_stack **a, t_stack **b)
{
	int		i;
	char	str[5];

	i = -1;
	while (i != 0)
	{
		ft_bzero(str, 5);
		i = read(0, str, 4);
		if (i != 0 && !apply_instruction(a, b, str))
		{
			ft_putstr_fd(2, "Error\n");
			t_stack_destory(a);
			t_stack_destory(b);
			exit (1);
		}
	}
}
