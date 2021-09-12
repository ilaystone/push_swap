/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:58:56 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:43:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_putchar_fd(int fd, int c);
int		ft_isdigit(int c);
int		ft_strisdigit(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_isspace(int c);
size_t	ft_putstr_fd(int fd, char *str);
long	ft_atol(const char *str);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
int		ft_math_abs(int nbr);
int		ft_math_max(int a, int b);
int		ft_math_min(int a, int b);

#endif