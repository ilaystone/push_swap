/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_insert_next.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:49:57 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 16:32:55 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	patch1_1(t_stack **a, t_stack **b, int pos, int tmp)
{
	int		i;

	i = ft_math_abs(tmp);
	if (pos > 0)
	{
		while (i--)
		{
			rotate_both(a, b);
			ft_putstr_fd(1, "rr\n");
		}
	}
	else
	{
		while (i--)
		{
			reverse_rotate_both(a, b);
			ft_putstr_fd(1, "rrr\n");
		}
	}
}

static void	patch1(t_stack **a, t_stack **b, int *pos)
{
	int		tmp;

	if (pos[0] * pos[1] > 0)
	{
		if (pos[0] > 0)
			tmp = ft_math_min(pos[0], pos[1]);
		else
			tmp = ft_math_max(pos[0], pos[1]);
		patch1_1(a, b, pos[0], tmp);
		pos[0] -= tmp;
		pos[1] -= tmp;
	}
}

static void	patch2(t_stack **s, int pos, const char *r, const char *rr)
{
	int		i;

	i = ft_math_abs(pos);
	if (pos > 0)
	{
		while (i--)
		{
			rotate_stack(s);
			ft_putstr_fd(1, r);
		}
	}
	else
	{
		while (i--)
		{
			reverse_rotate_stack(s);
			ft_putstr_fd(1, rr);
		}
	}
}

void	insert_next(t_stack **a, t_stack **b, int *pos)
{
	patch1(a, b, pos);
	patch2(a, pos[0], "ra\n", "rra\n");
	patch2(b, pos[1], "rb\n", "rrb\n");
	push_stack(b, a);
	ft_putstr_fd(1, "pa\n");
}
