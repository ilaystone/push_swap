/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:26:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/15 14:50:58 by ikhadem          ###   ########.fr       */
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

	i = 0;
	if (issign(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) && str[i] != ' ')
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
		if (!check_str(av[i]))
			return (0);
		i++;
	}
	return (1);
}
