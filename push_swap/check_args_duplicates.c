/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_duplicates.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:35:33 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/15 14:46:31 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cheack_args_duplicates(int ac, char **av)
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
