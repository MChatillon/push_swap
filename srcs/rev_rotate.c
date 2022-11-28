/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:21:54 by mdoroana          #+#    #+#             */
/*   Updated: 2022/11/28 20:27:41 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rev_rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast(*a);
	tmp2 = *a;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	ft_lstadd_front(a, tmp);
	ft_printf("rra\n");
}

void	rev_rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast(*b);
	tmp2 = *b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	ft_lstadd_front(b, tmp);
	ft_printf("rrb\n");
}

void	rev_rotate_all(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast(*a);
	tmp2 = *a;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	ft_lstadd_front(a, tmp);
	tmp = ft_lstlast(*b);
		tmp2 = *b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	ft_lstadd_front(b, tmp);
	ft_printf("rrr\n");
}
