/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:36:25 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 13:40:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_args_within_limits(int ac, char **av)
{
	int		i;
	long	current;

	i = 1;
	while (i < ac)
	{
		if (ft_strlen(av[i]) > 10)
			return (0);
		current = ft_atol(av[i]);
		if (current > P_MAX_INT || current < P_MIN_INT)
			return (0);
		i++;
	}
	return (1);
}