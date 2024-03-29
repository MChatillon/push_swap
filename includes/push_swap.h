/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:01:54 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:00 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <limits.h>

int		ps_atoi(char **str, t_list **a);
void	parse_args(char **av, t_list **a);
void	is_min_max(int	*min, int *max, t_list *a);
int		is_sorted(t_list *a);
void	algo3(t_list **a);
void	algo2(t_list **a);
void	algo4(t_list **a, t_list **b);
void	algo5(t_list **a, t_list **b);
void	set_index(t_list **a);
int		find_max_bits(t_list **a);
void	radix_sort(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **b, t_list **a);
void	rev_rotate_a(t_list **a);
void	rev_rotate_b(t_list **b);
void	rev_rotate_all(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_all(t_list **a, t_list **b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_all(t_list **a, t_list **b);
void	print_msg(int status, t_list **a);

#endif