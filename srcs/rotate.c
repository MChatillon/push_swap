/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:22:05 by mdoroana          #+#    #+#             */
/*   Updated: 2022/12/01 19:06:40 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rotate_all(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	tmp = (*b);
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	ft_printf("rr\n");
}
