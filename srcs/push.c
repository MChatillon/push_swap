/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:22:03 by mdoroana          #+#    #+#             */
/*   Updated: 2022/11/28 20:34:16 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*b)
		return ;
	tmp2 = (*a);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	(*a)->next = tmp2;
	*b = tmp;
	ft_printf("pa\n");
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*a)
		return ;
	tmp2 = (*b);
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	(*b)->next = tmp2;
	*a = tmp;
	ft_printf("pb\n");
}
