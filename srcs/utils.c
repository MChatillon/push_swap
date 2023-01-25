/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:47:19 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:39 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a)
{
	if (!a)
		return (0);
	while (a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

void	is_min_max(int	*min, int *max, t_list *a)
{
	while (a)
	{
		if (a->data < *min)
			*min = a->data;
		if (a->data > *max)
			*max = a->data;
		a = a->next;
	}
}
