/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_execute_instructions_bonus.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:02:33 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:02:48 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	apply_instruction(t_stack **a, t_stack **b, char *ins)
{
	if (ft_strcmp("sa", ins) == 0)
		swap_stack(a);
	else if (ft_strcmp("sb", ins) == 0)
		swap_stack(b);
	else if (ft_strcmp("ss", ins) == 0)
		swap_both(a, b);
	else if (ft_strcmp("ra", ins) == 0)
		rotate_stack(a);
	else if (ft_strcmp("rb", ins) == 0)
		rotate_stack(b);
	else if (ft_strcmp("rr", ins) == 0)
		rotate_both(a, b);
	else if (ft_strcmp("rra", ins) == 0)
		reverse_rotate_stack(a);
	else if (ft_strcmp("rrb", ins) == 0)
		reverse_rotate_stack(b);
	else if (ft_strcmp("rrr", ins) == 0)
		reverse_rotate_both(a, b);
	else if (ft_strcmp("pa", ins) == 0)
		push_stack(b, a);
	else if (ft_strcmp("pb", ins) == 0)
		push_stack(a, b);
	else
		return (0);
	return (1);
}

void	checker_execute_instructions(t_stack **a, t_stack **b)
{
	char	*str;

	str = (char *)malloc(4 * sizeof(char));
	bzero(str, 4);
	while (get_next_line(&str) != 0)
	{
		if (!apply_instruction(a, b, str))
		{
			printf("==%s==\n", str);
			ft_putstr_fd(2, "Error\n");
			t_stack_destory(a);
			t_stack_destory(b);
			exit (1);
		}
		bzero(str, 4);
	}
}
