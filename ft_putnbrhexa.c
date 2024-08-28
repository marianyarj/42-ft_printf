/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:14:12 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 15:56:42 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhexa(unsigned int n, char x)
{
	char	*str;
	int		len;

	str = ft_itoahexa(n, x);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
