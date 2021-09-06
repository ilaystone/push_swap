/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_stack_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:12:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/06 17:06:39 by ikhadem          ###   ########.fr       */
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
	size_t	size;

	i = 0;
	size = t_stack_size(*a) - 1;
	while (i < size + 1)
	{
		if (x < t_stack_index(*a, i) && x > t_stack_index(*a, i - 1))
			return (i);
		if (x > t_stack_index(*a, size - i) &&
			x < t_stack_index(*a, size - i + 1))
			return (size - i + 1);
		i++;
	}
	max_val_pos = t_stack_index_of(*a, t_stack_max(*a)) + 1;
	if (max_val_pos == size + 1)
		max_val_pos = 0;
	if (max_val_pos > size + 1 - max_val_pos)
		max_val_pos = -(size + 1) - max_val_pos;
	return (max_val_pos);
}

static int	*find_best(t_stack **a, t_stack **b)
{
	int			max_ops;
	t_stack		*iter;
	int			i;
	static int	res[2];
	int			tmp[2];

	max_ops = count_ops(-t_stack_size(*a), t_stack_size(*b));
	i = 0;
	iter = *b;
	while (iter)
	{
		if (count_ops(i, 0) >= max_ops)
			break ;
		i++;
		iter = iter->next;
	}
	return (res);
}

void	sort_elements_in_stack_b(t_stack **a, t_stack **b)
{
	int		*best_pos;

	best_pos = find_best(a, b);
}
