/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoahexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:09:59 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 12:23:47 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digit_counter(unsigned long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
	}
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char	*ft_itoahexa(unsigned long n, char x)
{
	char			*result;
	int				i;
	int				hexa;
	unsigned long	nb;

	nb = n;
	i = ft_digit_counter(nb);
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[i--] = '\0';
	if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		hexa = nb % 16;
		if (hexa < 10)
			result[i--] = hexa % 10 + '0';
		else
			result[i--] = hexa - 10 + x;
		nb = nb / 16;
	}
	return (result);
}
