/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:13:33 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:24 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	is_max(int *max, t_list *a)
{
	while (a)
	{
		if (a->index > *max)
			*max = a->index;
		a = a->next;
	}
}

void	set_index(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	while (++i <= ft_lstsize(*a))
	{
		tmp = *a;
		min = INT_MAX;
		while (tmp)
		{
			if (tmp->data < min && tmp->index == -1)
				min = tmp->data;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp->data != min)
			tmp = tmp->next;
		tmp->index = i;
	}
}

int	find_max_bits(t_list **a)
{
	int		i;
	int		max;

	i = 0;
	max = INT_MIN;
	is_max(&max, *a);
	while (max && ++i)
		max >>= 1;
	return (i);
}

void	radix_sort(t_list **a, t_list **b)
{
	int		size;
	int		i;
	int		max_bits;
	t_list	*tmp;

	max_bits = find_max_bits(a);
	i = -1;
	while (++i < max_bits)
	{
		size = ft_lstsize(*a);
		while (size--)
		{
			tmp = *a;
			if ((tmp->index >> i & 1))
				rotate_a(a);
			else
				push_b(b, a);
		}
		while (*b)
			push_a(a, b);
	}
}
