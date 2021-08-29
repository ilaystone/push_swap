/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:22:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 12:22:36 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_isspace(int c)
{
	unsigned char	i;

	i = (unsigned char)c;
	if (i == ' ')
		return (1);
	if (i == '\n')
		return (1);
	if (i == '\t')
		return (1);
	if (i == '\v')
		return (1);
	if (i == '\r')
		return (1);
	if (i == '\f')
		return (1);
	return (0);
}
