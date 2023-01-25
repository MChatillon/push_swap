/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:10 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:07 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
}

void	print_msg(int status, t_list **a)
{
	if (status)
		write(2, "Error\n", ft_strlen("Error\n"));
	free_list(a);
	exit(status);
}
