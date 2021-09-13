/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:26:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 13:09:11 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	issign(int c)
{
	return (c == '+' || c == '-' || c == ' ');
}

static int	ft_strisdigit_or_sign(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && !issign(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_args_numeric(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!ft_strisdigit_or_sign(av[i]))
			return (0);
		i++;
	}
	return (1);
}
