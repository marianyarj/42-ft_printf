/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:50:07 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 15:56:40 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(int n)
{
	char		*str;
	int			len;
	long int	n_negative;

	len = 0;
	if (n < 0)
	{
		n_negative = 4294967296 + n;
		str = ft_itoa(n_negative);
		len = write(1, str, ft_strlen(str));
		free(str);
	}
	else
	{
		str = ft_itoa(n);
		len = write(1, str, ft_strlen(str));
		free(str);
	}
	return (len);
}
