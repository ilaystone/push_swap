/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:06:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 13:53:30 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (!push_swap_check_errors(ac, av))
			ft_putstr_fd(2, "Error\n");
		else
		{
			push_swap_sort(ac, av);
		}
	}
	else
		ft_putstr_fd(2, "Error\n");
	return (0);
}