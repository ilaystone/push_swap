/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_check_errors_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:19:17 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/16 16:08:47 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	checker_check_errors(int ac, char **av)
{
	if (!check_args_numeric(ac, av))
		return (0);
	if (!check_args_within_limits(ac, av))
		return (0);
	if (!check_args_duplicates(ac, av))
		return (0);
	return (1);
}
