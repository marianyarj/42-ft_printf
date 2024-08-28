/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:53:00 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/10 11:04:30 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format_string, ...)
{
	va_list	list_arg;
	int		len;
	int		i;

	va_start(list_arg, format_string);
	len = 0;
	i = 0;
	while (format_string[i])
	{
		if (format_string[i] == '%' && format_string[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format_string[i] == '%' && format_string[i + 1] != '\0')
		{
			len += ft_toconvert(format_string[i + 1], list_arg);
			i++;
		}
		else
			len += ft_putchar(format_string[i]);
		i++;
	}
	va_end (list_arg);
	return (len);
}
