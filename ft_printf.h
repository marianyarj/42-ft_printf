/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:39:37 by made-ara          #+#    #+#             */
/*   Updated: 2024/08/08 19:00:32 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_toconvert(char format, va_list list_arg);
int		ft_printf(char const *format_string, ...);
int		ft_putchar(char c);
int		ft_strlen(const char *s);
int		ft_putstr(char *s);
char	*ft_itoa(long int n);
char	*ft_itoahexa(unsigned long n, char x);
int		ft_puthexa(unsigned long n, char x);
int		ft_putptr(void *p);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(int n);
int		ft_putnbrhexa(unsigned int n, char x);

#endif