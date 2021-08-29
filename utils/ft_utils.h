/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:58:56 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 13:40:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int			ft_atoi(const char *);
int			ft_putchar_fd(int, int);
int			ft_isdigit(int);
int			ft_strisdigit(char *);
int			ft_strcmp(char *, char *);
int			ft_isspace(int c);
size_t		ft_putstr_fd(int, char *);
long		ft_atol(const char *str);
size_t		ft_strlen(const char *str);

#endif