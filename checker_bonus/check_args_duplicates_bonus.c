/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_duplicates_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:49:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/16 16:08:41 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	check_args_duplicates(int ac, char **av)
{
	int		i;
	int		j;
	int		count;

	i = 1;
	while (i < ac)
	{
		count = 0;
		j = 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) == 0)
				count++;
			j++;
		}
		if (count != 1)
			return (0);
		i++;
	}
	return (1);
}
