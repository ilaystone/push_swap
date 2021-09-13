/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:32:38 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:53:43 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap_check_errors(int ac, char **av)
{
	if (!check_args_numeric(ac, av))
		return (0);
	if (!check_args_within_limits(ac, av))
		return (0);
	if (!cheack_args_duplicates(ac, av))
		return (0);
	return (1);
}
