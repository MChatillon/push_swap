/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:39:05 by mdoroana          #+#    #+#             */
/*   Updated: 2022/12/02 19:53:44 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		print_msg(0, &a);
	parse_args(av, &a);
	set_index(&a);
	if (ft_lstsize(a) == 2)
		algo2(&a);
	if (ft_lstsize(a) == 3)
		algo3(&a);
	if (ft_lstsize(a) == 4)
		algo4(&a, &b);
	if (ft_lstsize(a) == 5)
		algo5(&a, &b);
	else
		radix_sort(&a, &b);
	print_msg(0, &a);
	return (0);
}

	// b = a;
	// while (b)
	// {
	// 	printf("%i %i\n", b->data, b->index);
	// 	b = b->next;
	// }