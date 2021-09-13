/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:26:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/13 11:17:33 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	issign(int c)
{
	return (c == '+' || c == '-' || c == ' ');
}

int	check_str(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (issign(str[i]))
	{
		i++;
	}
	while (str[i] != '\0')
	{
		res = 1;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (res);
}

int	check_args_numeric(int ac, char **av)
{
	int		i;
	int		res;

	i = 1;
	res = 0;
	while (i < ac)
	{
		res = 1;
		if (!check_str(av[i]))
			return (0);
		i++;
	}
	return (res);
}
