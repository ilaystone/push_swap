/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:56:55 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 15:18:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (!checker_check_errors(ac, av))
			ft_putstr_fd(2, "Error\n");
		else
			checker_execute(ac, av);
	}
	return (0);
}
