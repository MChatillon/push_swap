/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:21:08 by mdoroana          #+#    #+#             */
/*   Updated: 2022/03/29 17:31:53 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(const char *str, int i, va_list *args)
{
	int	counter;

	counter = 0;
	if (str[i] == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (str[i] == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (str[i] == 'u')
		return (ft_putul((t_lu)va_arg(*args, t_ui), DEC, 10, 0));
	if (str[i] == 'p')
		return (ft_putstr("0x") + ft_putul((t_lu)va_arg(*args, t_lu),
				HEXS, 16, 0));
	if (str[i] == 'x')
		return (ft_putul((t_lu)va_arg(*args, t_ui), HEXS, 16, 0));
	if (str[i] == 'X')
		return (ft_putul((t_lu)va_arg(*args, t_ui), HEXL, 16, 0));
	if (str[i] == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_conversion(str, ++i, &args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
/* 
int	main(void)
{
	printf("\n%d", ft_printf("%x", 9223372036854775807LL));
	printf("%llx", 9223372036854775807LL);
}
 */