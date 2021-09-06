/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_borders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:15:31 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/06 15:18:43 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_math_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
