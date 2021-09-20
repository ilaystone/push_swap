/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:56:26 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/19 14:23:33 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "ft_utils.h"
# include "t_stack.h"

# define P_MAX_INT 2147483647
# define P_MIN_INT -2147483648

int			checker_check_errors(int ac, char **av);
int			check_args_numeric(int ac, char **av);
int			check_args_within_limits(int ac, char **av);
int			check_str_within_limit(char *str);
int			check_args_duplicates(int ac, char **av);
int			check_str(char *str);
void		checker_execute(int ac, char **av);
void		checker_execute_instructions(t_stack **a, t_stack **b);
t_stack		*set_stack(int ac, char **av);

/********************
**** OPERATIONS ****
********************/

void		swap_stack(t_stack **s);
void		swap_both(t_stack **a, t_stack **b);
void		rotate_stack(t_stack **s);
void		rotate_both(t_stack **a, t_stack **b);
void		reverse_rotate_stack(t_stack **s);
void		reverse_rotate_both(t_stack **a, t_stack **b);
void		push_stack(t_stack **a, t_stack **b);

#endif