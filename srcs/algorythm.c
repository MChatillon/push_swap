/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:35:58 by mdoroana          #+#    #+#             */
/*   Updated: 2022/12/02 17:14:14 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo2(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		swap_a(a);
}

/*
1 2 3 - sorted
1 3 2 - rra sa
2 1 3 sa
2 3 1 rra
3 1 2 ra
3 2 1 ra sa
Max na primeira casa - ra

*/
void	algo3(t_list **a)
{
	int	max;
	int	min;

	min = INT_MAX;
	max = INT_MIN;
	is_min_max(&min, &max, *a);
	if ((*a)->data == max)
		rotate_a(a);
	if ((*a)->next->next->data == min || \
	((*a)->data == min && (*a)->next->next->data != max))
		rev_rotate_a(a);
	if (!is_sorted(*a))
		swap_a(a);
}

void	algo4(t_list **a, t_list **b)
{
	int	max;
	int	min;

	min = INT_MAX;
	max = INT_MIN;
	is_min_max(&min, &max, *a);
	if (!is_sorted(*a))
	{
		while ((*a)->data != min && (*a)->data != max)
			rotate_a(a);
		push_b(b, a);
		algo3(a);
		push_a(a, b);
		if (!is_sorted(*a))
			rotate_a(a);
	}
}

void	algo5(t_list **a, t_list **b)
{
	int	max;
	int	min;

	min = INT_MAX;
	max = INT_MIN;
	is_min_max(&min, &max, *a);
	if (!is_sorted(*a))
	{
		while ((*a)->data != min && (*a)->data != max)
			rotate_a(a);
		push_b(b, a);
		while ((*a)->data != min && (*a)->data != max)
			rotate_a(a);
		push_b(b, a);
		algo3(a);
		push_a(a, b);
		if (!is_sorted(*a))
			rotate_a(a);
		push_a(a, b);
		if (!is_sorted(*a))
			rotate_a(a);
	}
}