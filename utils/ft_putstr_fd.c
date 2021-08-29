/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:06:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 11:14:48 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_putstr_fd(int fd, char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		ft_putchar_fd(fd, str[i++]);
	return (i);
}
