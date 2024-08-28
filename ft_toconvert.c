/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:48:44 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/08 18:34:13 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_toconvert(char format, va_list list_arg)
{
	if (format == 'c')
		return (ft_putchar(va_arg(list_arg, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(list_arg, char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(list_arg, void *)));
	else if (format == 'd')
		return (ft_putnbr(va_arg(list_arg, int)));
	else if (format == 'i')
		return (ft_putnbr(va_arg(list_arg, int)));
	else if (format == 'u')
		return (ft_putnbr_unsigned(va_arg(list_arg, int)));
	else if (format == 'x')
		return (ft_putnbrhexa(va_arg(list_arg, int), 'a'));
	else if (format == 'X')
		return (ft_putnbrhexa(va_arg(list_arg, int), 'A'));
	else if (format == '%')
		return (ft_putchar('%'));
	else
	{
		ft_putchar('%');
		return (ft_putchar(format) + 1);
	}
	return (-1);
}
