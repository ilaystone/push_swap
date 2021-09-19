/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_best_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:48:10 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:59:28 by ikhadem          ###   ########.fr       */
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

static void	set_value(int *res, int val1, int val2)
{
	res[0] = val1;
	res[1] = val2;
}

int	*find_best(t_stack **a, t_stack **b)
{
	t_stack		*iter;
	int			i;
	static int	res[2];
	int			tmp;

	i = 0;
	iter = *b;
	set_value(res, -t_stack_size(*a), t_stack_size(*b));
	while (iter)
	{
		if (count_ops(i, 0) >= count_ops(res[0], res[1]))
			break ;
		tmp = find_place(a, t_stack_index(*b, i));
		if (count_ops(tmp, i) < count_ops(res[0], res[1]))
			set_value(res, tmp, i);
		tmp = find_place(a, t_stack_index(*b, -i));
		if (count_ops(tmp, -i) < count_ops(res[0], res[1]))
			set_value(res, tmp, -i);
		i++;
		iter = iter->next;
	}
	return (res);
}
