/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:37:50 by mdoroana          #+#    #+#             */
/*   Updated: 2023/01/25 16:07:17 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	is_dupe(t_list *stack, int n)
{
	while (stack)
	{
		if (stack->data == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ps_atoi(char **str, t_list **a)
{
	int			sig;
	long long	nb;

	sig = 1;
	nb = 0;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sig *= -1;
		*str += 1;
		if (!(**str >= '0' && **str <= '9'))
			print_msg(1, a);
	}
	while (**str >= '0' && **str <= '9')
	{
		nb = (nb * 10) + (sig * (**str - 48));
		*str += 1;
		if (nb > INT_MAX || nb < INT_MIN)
			print_msg(1, a);
	}
	if (**str && (**str <= 9 && **str >= 13) && **str != 32)
		print_msg(1, a);
	while ((**str >= 9 && **str <= 13) || **str == 32)
		*str += 1;
	return (nb);
}

void	parse_args(char **av, t_list **a)
{
	int		i;
	long	n;
	char	*s;

	i = 0;
	n = 0;
	while (av[++i])
	{
		s = av[i];
		if (!*s)
			print_msg(1, a);
		while (*s)
		{
			while ((*s >= 9 && *s <= 13) || *s == 32)
				s++;
			if (!*s)
				print_msg(1, a);
			n = ps_atoi(&s, a);
			if (is_dupe(*a, n))
				print_msg(1, a);
			ft_lstadd_back(a, ft_lstnew(n));
		}
	}
}
