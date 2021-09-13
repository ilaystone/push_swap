/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_stack_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:12:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:52:25 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_ops(int a, int b)
{
	if (a * b > 0)
		return (ft_math_max(ft_math_abs(a), ft_math_abs(b)));
	else
		return (ft_math_abs(a) + ft_math_abs(b));
}

static int	find_place(t_stack **a, int x)
{
	int		i;
	int		max_val_pos;
	int		size;

	i = 0;
	size = t_stack_size(*a);
	while (i < size)
	{
		if (x < t_stack_index(*a, i) && x > t_stack_index(*a, i - 1))
			return (i);
		if (x > t_stack_index(*a, -i) && x < t_stack_index(*a, -i + 1))
			return (-i + 1);
		i++;
	}
	max_val_pos = t_stack_index_of(*a, t_stack_max(*a)) + 1;
	if (max_val_pos == size)
		max_val_pos = 0;
	if (max_val_pos > size - max_val_pos)
		max_val_pos = -(size - max_val_pos);
	return (max_val_pos);
}

static int	*find_best(t_stack **a, t_stack **b)
{
	t_stack		*iter;
	int			i;
	static int	res[2];
	int			tmp;

	i = 0;
	iter = *b;
	res[0] = -t_stack_size(*a);
	res[1] = t_stack_size(*b);
	while (iter)
	{
		if (count_ops(i, 0) >= count_ops(res[0], res[1]))
			break ;
		tmp = find_place(a, t_stack_index(*b, i));
		if (count_ops(tmp, i) < count_ops(res[0], res[1]))
		{
			res[0] = tmp;
			res[1] = i;
		}
		tmp = find_place(a, t_stack_index(*b, -i));
		if (count_ops(tmp, -i) < count_ops(res[0], res[1]))
		{
			res[0] = tmp;
			res[1] = -i;
		}
		i++;
		iter = iter->next;
	}
	return (res);
}

static void	insert_next(t_stack **a, t_stack **b, int *pos)
{
	int		tmp;
	int		i;
	if (pos[0] * pos[1] > 0)
	{
		if (pos[0] > 0)
			tmp = ft_math_min(pos[0], pos[1]);
		else
			tmp = ft_math_max(pos[0], pos[1]);
		i = ft_math_abs(tmp);
		if (pos[0] > 0)
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
		pos[0] -= tmp;
		pos[1] -= tmp;
	}
	i = ft_math_abs(pos[0]);
	if (pos[0] > 0)
	{
		while (i--)
		{
			rotate_stack(a);
			ft_putstr_fd(1, "ra\n");
		}
	}
	else
	{
		while (i--)
		{
			reverse_rotate_stack(a);
			ft_putstr_fd(1, "rra\n");
		}
	}
	i = ft_math_abs(pos[1]);
	if (pos[1] > 0)
	{
		while (i--)
		{
			rotate_stack(b);
			ft_putstr_fd(1, "rb\n");
		}
	}
	else
	{
		while (i--)
		{
			reverse_rotate_stack(b);
			ft_putstr_fd(1, "rrb\n");
		}
	}
	push_stack(b, a);
	ft_putstr_fd(1, "pa\n");
}

static void	align_stack(t_stack **a)
{
	int		pos;
	int		i;

	pos = t_stack_index(*a, 0);
	if (pos < (int)t_stack_size(*a) - pos)
	{
		i = pos;
		while (i--)
		{
			reverse_rotate_stack(a);
			ft_putstr_fd(1, "rra\n");
		}
	}
	else
	{
		i = t_stack_size(*a) - pos;
		while (i--)
		{
			rotate_stack(a);
			ft_putstr_fd(1, "ra\n");
		}
	}
}

void	sort_elements_in_stack_b(t_stack **a, t_stack **b)
{
	int		*best_pos;

	while (t_stack_size(*b))
	{
		best_pos = find_best(a, b);
		insert_next(a, b, best_pos);
	}
	align_stack(a);
}
