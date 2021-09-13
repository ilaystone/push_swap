/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_set_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:16:54 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/13 09:31:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	get_2p_size(char **str)
{
	size_t		size;

	size = 0;
	while (str[size] != NULL)
		size++;
	return (size);
}

static int	set_arg(t_stack **s, char *str)
{
	char	**values;
	int		res;
	size_t	values_size;

	res = 1;
	values = ft_split(str, ' ');
	values_size = get_2p_size(values);
	while (values_size--)
	{
		if (check_str_within_limit(values[values_size]))
			t_stack_push(s, ft_atoi(values[values_size]));
		else
		{
			res = 0;
			break ;
		}
	}
	values_size = get_2p_size(values);
	while (values_size--)
		free(values[values_size]);
	free(values);
	return (res);
}

t_stack	*set_stack(int ac, char **av)
{
	t_stack		*a;

	t_stack_init(&a);
	while (ac-- != 1)
	{
		if (set_arg(&a, av[ac]) == 0)
		{
			t_stack_destory(&a);
			return (NULL);
		}
	}
	return (a);
}
