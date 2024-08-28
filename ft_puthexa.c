/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:47:41 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/07 11:32:46 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char x)
{
	char		*str;
	int			len;

	str = ft_itoahexa(n, x);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
