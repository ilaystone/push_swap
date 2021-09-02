/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_longest_increasing_subsequence.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:03:47 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/02 14:21:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_smallest_To_top(t_stack **copy)
{
	size_t		index;

	index = t_stack_index_of(*copy, 0);
	while (index--)
		rotate_stack(copy);
}

static int	*create_is_arr(size_t size)
{
	int		*is_arr;
	size_t	i;

	is_arr = (int *)malloc(sizeof(int) * size);
	if (!is_arr)
	{
		ft_putstr_fd(2, "Error\n");
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		is_arr[i] = 0;
		i++;
	}
	return (is_arr);
}

static int	*lis(t_stack **copy)
{
	int			*is_arr;
	size_t		size;
	size_t		i;
	size_t		j;

	size = t_stack_size(*copy);
	is_arr = create_is_arr(size);
	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (t_stack_index(*copy, j) < t_stack_index(*copy, i) &&
				is_arr[i] <= is_arr[j])
				is_arr[i] = 1 + is_arr[j];
			j++;
		}
		i++;
	}
	return (is_arr);
}

static t_stack	*create_list_of_elements(t_stack *copy, int *lis, size_t size)
{
	t_stack		*res;
	size_t		i;
	int			max;

	t_stack_init(&res);
	i = 0;
	max = lis[0];
	while (i < size)
	{
		if (lis[i] > max)
			max= lis[i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		if (lis[i] == max &&
			(t_stack_size(res) == 0 ||
			t_stack_index(copy, i) < t_stack_index(res, 0)))
			{
				t_stack_push(&res, t_stack_index(copy, i));
				max--;
			}
		i--;
	}
	return (res);
}

t_stack	*push_swap_longest_increasing_subsequence(t_stack **a)
{
	t_stack		*copy;
	t_stack		*lov;

	copy = t_stack_copy(*a);
	t_stack_display(copy);
	rotate_smallest_To_top(&copy);
	lov = create_list_of_elements(copy, lis(&copy), t_stack_size(copy));
	t_stack_display(lov);
	return (copy);
}
