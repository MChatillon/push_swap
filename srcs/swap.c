/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:22:09 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:35 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	if ((*a))
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	*b = (*b)->next;
	if ((*b))
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_printf("sb\n");
}

void	swap_all(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	if ((*a))
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = (*b);
	*b = (*b)->next;
	if ((*b))
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_printf("ss\n");
}
