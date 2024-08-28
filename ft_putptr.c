/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:43:58 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 15:56:38 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int		len;

	if (p == 0)
	{
		ft_putstr("(nil)");
		len = 5;
	}
	else
	{
		ft_putstr("0x");
		len = 2;
		len += ft_puthexa((unsigned long)p, 'a');
	}
	return (len);
}
