/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:22:09 by mdoroana          #+#    #+#             */
/*   Updated: 2022/12/01 19:06:47 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
