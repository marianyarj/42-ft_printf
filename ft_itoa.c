/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:07:57 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 15:54:16 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digit_counter(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(long int n)
{
	char		*result;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_counter(nb);
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[i--] = '\0';
	if (nb == 0)
	{
		result[0] = '0';
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
}
