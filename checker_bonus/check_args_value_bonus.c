/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_value_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:43:25 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/19 14:23:15 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	check_args_within_limits(int ac, char **av)
{
	int		i;
	long	current;

	i = 1;
	while (i < ac)
	{
		current = ft_atol(av[i]);
		if (current > P_MAX_INT || current < P_MIN_INT)
			return (0);
		i++;
	}
	return (1);
}

int	check_str_within_limit(char *str)
{
	long	current;

	if (!check_str(str))
		return (0);
	current = ft_atol(str);
	if (current > P_MAX_INT || current < P_MIN_INT)
		return (0);
	return (1);
}
